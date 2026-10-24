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

// Function: entry_002df5f0
// Address: 0x2df5f0 - 0x2df664
void entry_002df5f0_0x2df5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df5f0_0x2df5f0");
#endif

    switch (ctx->pc) {
        case 0x2df61cu: goto label_2df61c;
        case 0x2df628u: goto label_2df628;
        case 0x2df654u: goto label_2df654;
        default: break;
    }

    ctx->pc = 0x2df5f0u;

    // 0x2df5f0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2df5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2df5f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df5f8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2df5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2df5fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df600: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df604: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2df604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2df608: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x2df608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
    // 0x2df60c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2df60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df610: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2df610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df614: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DF614u;
    SET_GPR_U32(ctx, 31, 0x2DF61Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DF614u, 0x2DF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF61Cu;
label_2df61c:
    // 0x2df61c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2df61cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2df620: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DF620u;
    SET_GPR_U32(ctx, 31, 0x2DF628u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DF620u, 0x2DF628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF628u;
label_2df628:
    // 0x2df628: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2df628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2df62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2df62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df630: 0x0  nop
    ctx->pc = 0x2df630u;
    // NOP
    // 0x2df634: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2df634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2df638: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2df638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2df63c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2df63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2df640: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2df640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2df644: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2df644u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2df648: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2df648u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2df64c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2DF64Cu;
    SET_GPR_U32(ctx, 31, 0x2DF654u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2DF654u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DF654u) { return; }
    ctx->pc = 0x2DF654u;
label_2df654:
    // 0x2df654: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df658: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2df658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2df65c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2df660: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2df660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2df664u;
}
