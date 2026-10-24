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

// Function: entry_00348bbc
// Address: 0x348bbc - 0x348c90
void entry_00348bbc_0x348bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348bbc_0x348bbc");
#endif

    switch (ctx->pc) {
        case 0x348bccu: goto label_348bcc;
        case 0x348bd8u: goto label_348bd8;
        case 0x348c24u: goto label_348c24;
        case 0x348c30u: goto label_348c30;
        case 0x348c84u: goto label_348c84;
        default: break;
    }

    ctx->pc = 0x348bbcu;

    // 0x348bbc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348bc0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x348bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x348bc4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x348BC4u;
    SET_GPR_U32(ctx, 31, 0x348BCCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x348BC4u, 0x348BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BCCu;
label_348bcc:
    // 0x348bcc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348bd0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x348BD0u;
    SET_GPR_U32(ctx, 31, 0x348BD8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x348BD0u, 0x348BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348BD8u;
label_348bd8:
    // 0x348bd8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348bdc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x348bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348be0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x348be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348be4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348be8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x348be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348bec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x348becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x348bf0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x348bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x348bf4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x348bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348bf8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x348bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x348bfc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x348bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348c00: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x348c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x348c04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x348c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348c08: 0x0  nop
    ctx->pc = 0x348c08u;
    // NOP
    // 0x348c0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x348c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x348c10: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x348c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x348c14: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x348c18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x348c1c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x348C1Cu;
    SET_GPR_U32(ctx, 31, 0x348C24u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x348C1Cu, 0x348C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C24u;
label_348c24:
    // 0x348c24: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c28: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x348C28u;
    SET_GPR_U32(ctx, 31, 0x348C30u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x348C28u, 0x348C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C30u;
label_348c30:
    // 0x348c30: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x348c30u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348c34: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c38: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x348c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348c3c: 0xc4a10088  lwc1        $f1, 0x88($a1)
    ctx->pc = 0x348c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348c40: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c44: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x348c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348c48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x348c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348c4c: 0x0  nop
    ctx->pc = 0x348c4cu;
    // NOP
    // 0x348c50: 0x45010079  bc1t        . + 4 + (0x79 << 2)
    ctx->pc = 0x348C50u;
    {
        const bool branch_taken_0x348c50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x348c50) {
            ctx->pc = 0x348E38u;
            return;
        }
    }
    ctx->pc = 0x348C58u;
    // 0x348c58: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x348c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x348c5c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c60: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x348c60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x348c64: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x348c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c68: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x348c6c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x348c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x348c70: 0x24060418  addiu       $a2, $zero, 0x418
    ctx->pc = 0x348c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x348c74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x348c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348c78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x348c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x348c7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x348C7Cu;
    SET_GPR_U32(ctx, 31, 0x348C84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x348C7Cu, 0x348C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C84u;
label_348c84:
    // 0x348c84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x348c84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x348c88: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x348C88u;
    {
        const bool branch_taken_0x348c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348c88) {
            ctx->pc = 0x348E38u;
            return;
        }
    }
    ctx->pc = 0x348C90u;
}
