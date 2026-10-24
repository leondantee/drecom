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

// Function: entry_00180f1c
// Address: 0x180f1c - 0x180f68
void entry_00180f1c_0x180f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180f1c_0x180f1c");
#endif

    ctx->pc = 0x180f1cu;

    // 0x180f1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180f20: 0xc421f1e0  lwc1        $f1, -0xE20($at)
    ctx->pc = 0x180f20u;
    { uint32_t bits = FAST_READ32(0x47F1E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180f24: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x180f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x180f28: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x180f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x180f2c: 0x8423f138  lh          $v1, -0xEC8($at)
    ctx->pc = 0x180f2cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x47F138u));
    // 0x180f30: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x180f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x180f34: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180f34u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x180f38: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x180f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x180f3c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x180f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180f40: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x180f40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x180f44: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x180f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x180f48: 0x24681380  addiu       $t0, $v1, 0x1380
    ctx->pc = 0x180f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x180f4c: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x180f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x180f50: 0x8ce60158  lw          $a2, 0x158($a3)
    ctx->pc = 0x180f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
    // 0x180f54: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x180f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x180f58: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x180f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x180f5c: 0xace60158  sw          $a2, 0x158($a3)
    ctx->pc = 0x180f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 344), GPR_U32(ctx, 6));
    // 0x180f60: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x180F60u;
    {
        const bool branch_taken_0x180f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180f60) {
            ctx->pc = 0x181728u;
            return;
        }
    }
    ctx->pc = 0x180F68u;
}
