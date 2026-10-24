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

// Function: entry_001f5598
// Address: 0x1f5598 - 0x1f55fc
void entry_001f5598_0x1f5598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5598_0x1f5598");
#endif

    ctx->pc = 0x1f5598u;

    // 0x1f5598: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f559c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f55a0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f55a4: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f55a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f55a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f55ac: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f55acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f55b0: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1f55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1f55b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f55b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f55b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f55bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f55bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f55c0: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f55c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f55c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1f55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f55c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f55cc: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f55d0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f55d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f55d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f55d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F55D8u;
    {
        const bool branch_taken_0x1f55d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f55d8) {
            ctx->pc = 0x1F55FCu;
            return;
        }
    }
    ctx->pc = 0x1F55E0u;
    // 0x1f55e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f55e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f55e4: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f55e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f55ec: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1f55ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1f55f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f55f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f55f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f55f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f55f8: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f55f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x1f55fcu;
}
