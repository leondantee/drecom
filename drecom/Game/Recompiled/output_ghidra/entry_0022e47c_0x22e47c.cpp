#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0022e47c
// Address: 0x22e47c - 0x22e4cc
void entry_0022e47c_0x22e47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022e47c_0x22e47c");
#endif

    ctx->pc = 0x22e47cu;

    // 0x22e47c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e480: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x22e480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e484: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x22e484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x22e488: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x22e488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x22e48c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e490: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x22e490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x22e494: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x22e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e498: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22e49c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x22e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22e4a0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x22e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x22e4a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e4a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22E4A8u;
    {
        const bool branch_taken_0x22e4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e4a8) {
            ctx->pc = 0x22E4CCu;
            return;
        }
    }
    ctx->pc = 0x22E4B0u;
    // 0x22e4b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22e4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22e4b4: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x22e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22e4b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22e4bc: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x22e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x22e4c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22e4c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22e4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22e4c8: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x22e4c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x22e4ccu;
}
