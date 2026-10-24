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

// Function: entry_002a0e7c
// Address: 0x2a0e7c - 0x2a0f44
void entry_002a0e7c_0x2a0e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0e7c_0x2a0e7c");
#endif

    switch (ctx->pc) {
        case 0x2a0eb8u: goto label_2a0eb8;
        case 0x2a0ed4u: goto label_2a0ed4;
        case 0x2a0eecu: goto label_2a0eec;
        case 0x2a0f24u: goto label_2a0f24;
        default: break;
    }

    ctx->pc = 0x2a0e7cu;

    // 0x2a0e7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a0e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0e80: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x2a0e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e84: 0xa0e610a8  sb          $a2, 0x10A8($a3)
    ctx->pc = 0x2a0e84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4264), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a0e88: 0x3c043e8e  lui         $a0, 0x3E8E
    ctx->pc = 0x2a0e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16014 << 16));
    // 0x2a0e8c: 0x3482fa35  ori         $v0, $a0, 0xFA35
    ctx->pc = 0x2a0e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x2a0e90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0e94: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e98: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2a0e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e9c: 0x24a70120  addiu       $a3, $a1, 0x120
    ctx->pc = 0x2a0e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a0ea0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a0ea0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a0ea4: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x2a0ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0ea8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a0eac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a0eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a0eb0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A0EB0u;
    SET_GPR_U32(ctx, 31, 0x2A0EB8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A0EB0u, 0x2A0EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EB8u;
label_2a0eb8:
    // 0x2a0eb8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2a0eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2a0ebc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ec0: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x2a0ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0ec4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2a0ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0ec8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a0ec8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a0ecc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A0ECCu;
    SET_GPR_U32(ctx, 31, 0x2A0ED4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A0ECCu, 0x2A0ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0ED4u;
label_2a0ed4:
    // 0x2a0ed4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ed8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a0ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a0edc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ee0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a0ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a0ee4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A0EE4u;
    SET_GPR_U32(ctx, 31, 0x2A0EECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A0EE4u, 0x2A0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EECu;
label_2a0eec:
    // 0x2a0eec: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ef0: 0x908509db  lbu         $a1, 0x9DB($a0)
    ctx->pc = 0x2a0ef0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x2a0ef4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2a0ef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a0ef8: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x2a0ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x2a0efc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A0EFCu;
    {
        const bool branch_taken_0x2a0efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0efc) {
            ctx->pc = 0x2A0F44u;
            return;
        }
    }
    ctx->pc = 0x2A0F04u;
    // 0x2a0f04: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f08: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f0c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f10: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a0f14: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2a0f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a0f18: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a0f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a0f1c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A0F1Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F24u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A0F1Cu, 0x2A0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F24u;
label_2a0f24:
    // 0x2a0f24: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a0f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0f28: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f2c: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2a0f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0f30: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x2a0f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x2a0f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a0f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0f38: 0x0  nop
    ctx->pc = 0x2a0f38u;
    // NOP
    // 0x2a0f3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a0f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a0f40: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a0f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    ctx->pc = 0x2a0f44u;
}
