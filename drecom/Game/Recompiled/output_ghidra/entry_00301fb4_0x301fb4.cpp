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

// Function: entry_00301fb4
// Address: 0x301fb4 - 0x30207c
void entry_00301fb4_0x301fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301fb4_0x301fb4");
#endif

    switch (ctx->pc) {
        case 0x302044u: goto label_302044;
        default: break;
    }

    ctx->pc = 0x301fb4u;

    // 0x301fb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301fb8: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x301fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x301fbc: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x301fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x301fc0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x301FC0u;
    {
        const bool branch_taken_0x301fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301fc0) {
            ctx->pc = 0x30207Cu;
            return;
        }
    }
    ctx->pc = 0x301FC8u;
    // 0x301fc8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301fcc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301fd0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x301fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x301fd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301fd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301fd8: 0x0  nop
    ctx->pc = 0x301fd8u;
    // NOP
    // 0x301fdc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301fe0: 0x0  nop
    ctx->pc = 0x301fe0u;
    // NOP
    // 0x301fe4: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x301FE4u;
    {
        const bool branch_taken_0x301fe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301fe4) {
            ctx->pc = 0x30207Cu;
            return;
        }
    }
    ctx->pc = 0x301FECu;
    // 0x301fec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ff0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301ff4: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x301ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x301ff8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x301ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x301ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302000: 0x0  nop
    ctx->pc = 0x302000u;
    // NOP
    // 0x302004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x302004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302008: 0x0  nop
    ctx->pc = 0x302008u;
    // NOP
    // 0x30200c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x30200Cu;
    {
        const bool branch_taken_0x30200c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30200c) {
            ctx->pc = 0x30207Cu;
            return;
        }
    }
    ctx->pc = 0x302014u;
    // 0x302014: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302018: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x302018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30201c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302020: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x302020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x302024: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302028: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30202c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x302030: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302034: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302038: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30203c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30203Cu;
    SET_GPR_U32(ctx, 31, 0x302044u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30203Cu, 0x302044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302044u;
label_302044:
    // 0x302044: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302044u;
    {
        const bool branch_taken_0x302044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302044) {
            ctx->pc = 0x30207Cu;
            return;
        }
    }
    ctx->pc = 0x30204Cu;
    // 0x30204c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302050: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302054: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302058: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x302058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x30205c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302060: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302064: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302068: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30206c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30206cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302070: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302074: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302078: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30207cu;
}
