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

// Function: entry_0030cd74
// Address: 0x30cd74 - 0x30ce44
void entry_0030cd74_0x30cd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030cd74_0x30cd74");
#endif

    switch (ctx->pc) {
        case 0x30cdb0u: goto label_30cdb0;
        case 0x30cdc4u: goto label_30cdc4;
        case 0x30cddcu: goto label_30cddc;
        case 0x30cde8u: goto label_30cde8;
        case 0x30cdf8u: goto label_30cdf8;
        case 0x30ce04u: goto label_30ce04;
        default: break;
    }

    ctx->pc = 0x30cd74u;

    // 0x30cd74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd78: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x30cd78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30cd7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30cd80: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x30cd80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cd84: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd88: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x30cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd90: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x30cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x30cd94: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x30cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x30cd98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30cd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30cd9c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30cd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30cda0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30cda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cda4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30cda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30cda8: 0xc05c848  jal         func_172120
    ctx->pc = 0x30CDA8u;
    SET_GPR_U32(ctx, 31, 0x30CDB0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x30CDA8u, 0x30CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDB0u;
label_30cdb0:
    // 0x30cdb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cdb4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cdb8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x30cdb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30cdbc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30CDBCu;
    SET_GPR_U32(ctx, 31, 0x30CDC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30CDBCu, 0x30CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDC4u;
label_30cdc4:
    // 0x30cdc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cdc8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30cdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30cdcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cdd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30cdd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30cdd4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30CDD4u;
    SET_GPR_U32(ctx, 31, 0x30CDDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30CDD4u, 0x30CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDDCu;
label_30cddc:
    // 0x30cddc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cde0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30CDE0u;
    SET_GPR_U32(ctx, 31, 0x30CDE8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30CDE0u, 0x30CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDE8u;
label_30cde8:
    // 0x30cde8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cdec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30cdecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30cdf0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30CDF0u;
    SET_GPR_U32(ctx, 31, 0x30CDF8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30CDF0u, 0x30CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CDF8u;
label_30cdf8:
    // 0x30cdf8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cdfc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30CDFCu;
    SET_GPR_U32(ctx, 31, 0x30CE04u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30CDFCu, 0x30CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE04u;
label_30ce04:
    // 0x30ce04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30ce08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30ce0c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30CE0Cu;
    {
        const bool branch_taken_0x30ce0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ce0c) {
            ctx->pc = 0x30CE44u;
            return;
        }
    }
    ctx->pc = 0x30CE14u;
    // 0x30ce14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ce18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30ce1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ce20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ce24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30ce28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ce2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30ce30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ce34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30ce38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ce3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30ce44u;
}
