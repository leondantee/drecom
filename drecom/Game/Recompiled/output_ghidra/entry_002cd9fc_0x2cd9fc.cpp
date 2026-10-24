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

// Function: entry_002cd9fc
// Address: 0x2cd9fc - 0x2cdad8
void entry_002cd9fc_0x2cd9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd9fc_0x2cd9fc");
#endif

    switch (ctx->pc) {
        case 0x2cda28u: goto label_2cda28;
        case 0x2cdad0u: goto label_2cdad0;
        default: break;
    }

    ctx->pc = 0x2cd9fcu;

    // 0x2cd9fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cda00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda04: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cda04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cda08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda0c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cda0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda10: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cda10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cda14: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2cda14u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cda18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cda18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cda1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cda1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cda20: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CDA20u;
    SET_GPR_U32(ctx, 31, 0x2CDA28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CDA20u, 0x2CDA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA28u;
label_2cda28:
    // 0x2cda28: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2cda28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cda2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda30: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2cda30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cda34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cda34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cda38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cda3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda40: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2cda40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2cda44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cda44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cda48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cda48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cda4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cda50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda54: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cda54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cda58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda5c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cda5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda60: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2cda60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cda64: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2cda64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cda68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cda68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cda6c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2cda6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2cda70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cda70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cda74: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda78: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cda78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda7c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2cda7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2cda80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cda80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cda84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cda88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda8c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2cda8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2cda90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cda90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cda94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cda94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cda98: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2cda98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2cda9c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2cda9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2cdaa0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2cdaa0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2cdaa4: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2cdaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2cdaa8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CDAA8u;
    {
        const bool branch_taken_0x2cdaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdaa8) {
            ctx->pc = 0x2CDAD8u;
            return;
        }
    }
    ctx->pc = 0x2CDAB0u;
    // 0x2cdab0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdab4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdab8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cdab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cdabc: 0x24061e0a  addiu       $a2, $zero, 0x1E0A
    ctx->pc = 0x2cdabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7690));
    // 0x2cdac0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cdac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdac4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cdac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cdac8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CDAC8u;
    SET_GPR_U32(ctx, 31, 0x2CDAD0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CDAC8u, 0x2CDAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDAD0u;
label_2cdad0:
    // 0x2cdad0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDAD0u;
    {
        const bool branch_taken_0x2cdad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdad0) {
            ctx->pc = 0x2CDAF8u;
            return;
        }
    }
    ctx->pc = 0x2CDAD8u;
}
