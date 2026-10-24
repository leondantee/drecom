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

// Function: entry_00307c18
// Address: 0x307c18 - 0x307ca0
void entry_00307c18_0x307c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307c18_0x307c18");
#endif

    switch (ctx->pc) {
        case 0x307c60u: goto label_307c60;
        default: break;
    }

    ctx->pc = 0x307c18u;

    // 0x307c18: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c1c: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x307c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x307c20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x307c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x307c24: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x307c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x307c28: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x307C28u;
    {
        const bool branch_taken_0x307c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x307c28) {
            ctx->pc = 0x307CA0u;
            return;
        }
    }
    ctx->pc = 0x307C30u;
    // 0x307c30: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x307c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x307c34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x307c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x307c38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x307c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x307c3c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c40: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x307c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x307c44: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c48: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x307c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x307c4c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x307c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x307c50: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x307c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x307c54: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x307c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x307c58: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x307C58u;
    SET_GPR_U32(ctx, 31, 0x307C60u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x307C58u, 0x307C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307C60u;
label_307c60:
    // 0x307c60: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x307C60u;
    {
        const bool branch_taken_0x307c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307c60) {
            ctx->pc = 0x307CA0u;
            return;
        }
    }
    ctx->pc = 0x307C68u;
    // 0x307c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x307c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307c6c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x307c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c70: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x307c70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x307c74: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x307c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x307c78: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c7c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x307c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x307c80: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x307c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x307c88: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x307c88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c8c: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x307c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x307c90: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307c94: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x307c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x307c98: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x307C98u;
    {
        const bool branch_taken_0x307c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307c98) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x307CA0u;
}
