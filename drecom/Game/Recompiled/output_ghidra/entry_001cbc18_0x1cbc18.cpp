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

// Function: entry_001cbc18
// Address: 0x1cbc18 - 0x1cbce0
void entry_001cbc18_0x1cbc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc18_0x1cbc18");
#endif

    switch (ctx->pc) {
        case 0x1cbc60u: goto label_1cbc60;
        case 0x1cbc70u: goto label_1cbc70;
        case 0x1cbc80u: goto label_1cbc80;
        default: break;
    }

    ctx->pc = 0x1cbc18u;

    // 0x1cbc18: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1cbc18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbc1c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1cbc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbc20: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1cbc20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbc24: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1cbc24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cbc28: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cbc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cbc2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cbc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cbc30: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1cbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cbc34: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1cbc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1cbc38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cbc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cbc3c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1cbc3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cbc40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbc44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbc48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1cbc4c: 0x24063c61  addiu       $a2, $zero, 0x3C61
    ctx->pc = 0x1cbc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15457));
    // 0x1cbc50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cbc50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbc54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cbc54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cbc58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CBC58u;
    SET_GPR_U32(ctx, 31, 0x1CBC60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CBC58u, 0x1CBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC60u;
label_1cbc60:
    // 0x1cbc60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbc64: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1cbc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1cbc68: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CBC68u;
    SET_GPR_U32(ctx, 31, 0x1CBC70u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CBC68u, 0x1CBC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC70u;
label_1cbc70:
    // 0x1cbc70: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbc74: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x1cbc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x1cbc78: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CBC78u;
    SET_GPR_U32(ctx, 31, 0x1CBC80u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CBC78u, 0x1CBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC80u;
label_1cbc80:
    // 0x1cbc80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cbc80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cbc84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbc88: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1cbc88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1cbc8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbc90: 0xac601b64  sw          $zero, 0x1B64($v1)
    ctx->pc = 0x1cbc90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 0));
    // 0x1cbc94: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbc98: 0xac601b68  sw          $zero, 0x1B68($v1)
    ctx->pc = 0x1cbc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 0));
    // 0x1cbc9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cbc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbca0: 0xac801b6c  sw          $zero, 0x1B6C($a0)
    ctx->pc = 0x1cbca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 0));
    // 0x1cbca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cbca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbca8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbcac: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cbcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1cbcb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbcb4: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cbcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbcb8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbcbc: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x1cbcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x1cbcc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbcc4: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cbcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbcc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbccc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1cbcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1cbcd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cbcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cbcd4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1cbcd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cbcd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cbcdc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cbcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1cbce0u;
}
