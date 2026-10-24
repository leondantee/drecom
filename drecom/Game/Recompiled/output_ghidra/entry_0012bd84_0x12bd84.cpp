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

// Function: entry_0012bd84
// Address: 0x12bd84 - 0x12be08
void entry_0012bd84_0x12bd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bd84_0x12bd84");
#endif

    switch (ctx->pc) {
        case 0x12bda4u: goto label_12bda4;
        case 0x12bdf0u: goto label_12bdf0;
        default: break;
    }

    ctx->pc = 0x12bd84u;

    // 0x12bd84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd88: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bd8c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12bd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12bd90: 0x24063c0b  addiu       $a2, $zero, 0x3C0B
    ctx->pc = 0x12bd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15371));
    // 0x12bd94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12bd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bd98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12bd98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12bd9c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12BD9Cu;
    SET_GPR_U32(ctx, 31, 0x12BDA4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12BD9Cu, 0x12BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BDA4u;
label_12bda4:
    // 0x12bda4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bda8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x12bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12bdac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x12bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x12bdb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12bdb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bdb4: 0x0  nop
    ctx->pc = 0x12bdb4u;
    // NOP
    // 0x12bdb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12bdb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12bdbc: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x12bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
    // 0x12bdc0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x12bdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x12bdc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12bdc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12bdc8: 0x0  nop
    ctx->pc = 0x12bdc8u;
    // NOP
    // 0x12bdcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12bdccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12bdd0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bdd4: 0xe4401298  swc1        $f0, 0x1298($v0)
    ctx->pc = 0x12bdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4760), bits); }
    // 0x12bdd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bddc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12bde0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12bde4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12bde8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12BDE8u;
    SET_GPR_U32(ctx, 31, 0x12BDF0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12BDE8u, 0x12BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BDF0u;
label_12bdf0:
    // 0x12bdf0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bdf4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12bdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12bdf8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12bdfc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12bdfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12be00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12be00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12be04: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12be04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12be08u;
}
