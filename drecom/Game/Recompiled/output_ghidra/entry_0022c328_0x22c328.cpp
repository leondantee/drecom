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

// Function: entry_0022c328
// Address: 0x22c328 - 0x22c3c0
void entry_0022c328_0x22c328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c328_0x22c328");
#endif

    switch (ctx->pc) {
        case 0x22c338u: goto label_22c338;
        case 0x22c344u: goto label_22c344;
        default: break;
    }

    ctx->pc = 0x22c328u;

    // 0x22c328: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c32c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22c330: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22C330u;
    SET_GPR_U32(ctx, 31, 0x22C338u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22C330u, 0x22C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C338u;
label_22c338:
    // 0x22c338: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c33c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22C33Cu;
    SET_GPR_U32(ctx, 31, 0x22C344u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22C33Cu, 0x22C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C344u;
label_22c344:
    // 0x22c344: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c348: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c34c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22c34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c350: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c354: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22c354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c358: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22c358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22c35c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x22c35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x22c360: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c364: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22c364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c368: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x22c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c36c: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x22c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x22c370: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x22c370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x22c374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c378: 0x0  nop
    ctx->pc = 0x22c378u;
    // NOP
    // 0x22c37c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22c37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c380: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x22c380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x22c384: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c388: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c38c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22c38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c390: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22c390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22c394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c398: 0x0  nop
    ctx->pc = 0x22c398u;
    // NOP
    // 0x22c39c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c39cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c3a0: 0x0  nop
    ctx->pc = 0x22c3a0u;
    // NOP
    // 0x22c3a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22C3A4u;
    {
        const bool branch_taken_0x22c3a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c3a4) {
            ctx->pc = 0x22C3C0u;
            return;
        }
    }
    ctx->pc = 0x22C3ACu;
    // 0x22c3ac: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22c3b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c3b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c3b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c3b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c3bc: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22c3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x22c3c0u;
}
