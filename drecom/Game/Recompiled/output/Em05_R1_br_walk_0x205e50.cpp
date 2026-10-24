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

// Function: Em05_R1_br_walk
// Address: 0x205e50 - 0x206120
void Em05_R1_br_walk_0x205e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_br_walk_0x205e50");
#endif

    switch (ctx->pc) {
        case 0x205e84u: goto label_205e84;
        case 0x206004u: goto label_206004;
        default: break;
    }

    ctx->pc = 0x205e50u;

    // 0x205e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x205e54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x205e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x205e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x205e5c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x205e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x205e60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x205e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205e64: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x205e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x205e68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x205e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205e6c: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x205e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x205e70: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x205e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205e74: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x205e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x205e78: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x205e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x205e7c: 0xc05cc90  jal         func_173240
    ctx->pc = 0x205E7Cu;
    SET_GPR_U32(ctx, 31, 0x205E84u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x205E7Cu, 0x205E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E84u;
label_205e84:
    // 0x205e84: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x205e84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x205e88: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x205e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x205e8c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x205E8Cu;
    {
        const bool branch_taken_0x205e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e8c) {
            ctx->pc = 0x205EC4u;
            goto label_205ec4;
        }
    }
    ctx->pc = 0x205E94u;
    // 0x205e94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205e98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205e9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x205e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x205ea0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x205ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x205ea4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205ea8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x205ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x205eac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205eb0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x205eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x205eb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205eb8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x205eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x205ebc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205ec0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x205ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_205ec4:
    // 0x205ec4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205ec8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x205ec8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x205ecc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x205eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x205ed0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x205ed0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x205ed4: 0x28610259  slti        $at, $v1, 0x259
    ctx->pc = 0x205ed4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)601) ? 1 : 0);
    // 0x205ed8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x205ED8u;
    {
        const bool branch_taken_0x205ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ed8) {
            ctx->pc = 0x205F30u;
            goto label_205f30;
        }
    }
    ctx->pc = 0x205EE0u;
    // 0x205ee0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205ee4: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x205ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x205ee8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x205ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x205eec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x205eecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x205ef0: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x205ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x205ef4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x205EF4u;
    {
        const bool branch_taken_0x205ef4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x205ef4) {
            ctx->pc = 0x205F08u;
            goto label_205f08;
        }
    }
    ctx->pc = 0x205EFCu;
    // 0x205efc: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x205efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x205f00: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x205F00u;
    {
        const bool branch_taken_0x205f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f00) {
            ctx->pc = 0x205F30u;
            goto label_205f30;
        }
    }
    ctx->pc = 0x205F08u;
label_205f08:
    // 0x205f08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x205f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x205f0c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x205f0cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205f10: 0x3c03458c  lui         $v1, 0x458C
    ctx->pc = 0x205f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17804 << 16));
    // 0x205f14: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x205f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x205f18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205f1c: 0x0  nop
    ctx->pc = 0x205f1cu;
    // NOP
    // 0x205f20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x205f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205f24: 0x0  nop
    ctx->pc = 0x205f24u;
    // NOP
    // 0x205f28: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x205F28u;
    {
        const bool branch_taken_0x205f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205f28) {
            ctx->pc = 0x205F60u;
            goto label_205f60;
        }
    }
    ctx->pc = 0x205F30u;
label_205f30:
    // 0x205f30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205f34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x205f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x205f3c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x205f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x205f40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x205f44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x205f48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x205f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x205f50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x205f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x205f58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x205f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_205f60:
    // 0x205f60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f64: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x205f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x205f68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x205f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x205f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205f70: 0x14830066  bne         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x205F70u;
    {
        const bool branch_taken_0x205f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x205f70) {
            ctx->pc = 0x20610Cu;
            goto label_20610c;
        }
    }
    ctx->pc = 0x205F78u;
    // 0x205f78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f7c: 0x8c63134c  lw          $v1, 0x134C($v1)
    ctx->pc = 0x205f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4940)));
    // 0x205f80: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x205F80u;
    {
        const bool branch_taken_0x205f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f80) {
            ctx->pc = 0x20610Cu;
            goto label_20610c;
        }
    }
    ctx->pc = 0x205F88u;
    // 0x205f88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f8c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x205f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205f90: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x205f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x205f94: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x205f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x205f98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x205f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205f9c: 0x0  nop
    ctx->pc = 0x205f9cu;
    // NOP
    // 0x205fa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205fa4: 0x0  nop
    ctx->pc = 0x205fa4u;
    // NOP
    // 0x205fa8: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x205FA8u;
    {
        const bool branch_taken_0x205fa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205fa8) {
            ctx->pc = 0x20610Cu;
            goto label_20610c;
        }
    }
    ctx->pc = 0x205FB0u;
    // 0x205fb0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205FB0u;
    {
        const bool branch_taken_0x205fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x205fb0) {
            ctx->pc = 0x205FC4u;
            goto label_205fc4;
        }
    }
    ctx->pc = 0x205FB8u;
    // 0x205fb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x205fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205fbc: 0x16030037  bne         $s0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x205FBCu;
    {
        const bool branch_taken_0x205fbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x205fbc) {
            ctx->pc = 0x20609Cu;
            goto label_20609c;
        }
    }
    ctx->pc = 0x205FC4u;
label_205fc4:
    // 0x205fc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x205fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x205fc8: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x205fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x205fcc: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x205FCCu;
    {
        const bool branch_taken_0x205fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205fcc) {
            ctx->pc = 0x20609Cu;
            goto label_20609c;
        }
    }
    ctx->pc = 0x205FD4u;
    // 0x205fd4: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x205fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x205fd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x205fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x205fdc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x205fe0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x205fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205fe4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x205fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x205fe8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x205fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205fec: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x205fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x205ff0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x205ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205ff4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x205ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x205ff8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x205ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x205ffc: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x205FFCu;
    SET_GPR_U32(ctx, 31, 0x206004u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x205FFCu, 0x206004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206004u;
label_206004:
    // 0x206004: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x206004u;
    {
        const bool branch_taken_0x206004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206004) {
            ctx->pc = 0x20606Cu;
            goto label_20606c;
        }
    }
    ctx->pc = 0x20600Cu;
    // 0x20600c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20600cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x206010: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x206010u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206014: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x206014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x206018: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x206018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x20601c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20601cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206020: 0x0  nop
    ctx->pc = 0x206020u;
    // NOP
    // 0x206024: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x206024u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206028: 0x0  nop
    ctx->pc = 0x206028u;
    // NOP
    // 0x20602c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x20602Cu;
    {
        const bool branch_taken_0x20602c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20602c) {
            ctx->pc = 0x20606Cu;
            goto label_20606c;
        }
    }
    ctx->pc = 0x206034u;
    // 0x206034: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206038: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20603c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20603cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x206040: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x206040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x206044: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206048: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20604c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20604cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206050: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x206054: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206058: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206058u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20605c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206060: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x206064: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206064u;
    {
        const bool branch_taken_0x206064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206064) {
            ctx->pc = 0x20609Cu;
            goto label_20609c;
        }
    }
    ctx->pc = 0x20606Cu;
label_20606c:
    // 0x20606c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206070: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206074: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x206074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x206078: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x206078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20607c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20607cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206080: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x206084: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206088: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206088u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20608c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x20608cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206090: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x206094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206098: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20609c:
    // 0x20609c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20609Cu;
    {
        const bool branch_taken_0x20609c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20609c) {
            ctx->pc = 0x2060B0u;
            goto label_2060b0;
        }
    }
    ctx->pc = 0x2060A4u;
    // 0x2060a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2060a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2060a8: 0x16030018  bne         $s0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2060A8u;
    {
        const bool branch_taken_0x2060a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2060a8) {
            ctx->pc = 0x20610Cu;
            goto label_20610c;
        }
    }
    ctx->pc = 0x2060B0u;
label_2060b0:
    // 0x2060b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2060b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2060b4: 0x9023ec68  lbu         $v1, -0x1398($at)
    ctx->pc = 0x2060b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3EEC68u));
    // 0x2060b8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2060B8u;
    {
        const bool branch_taken_0x2060b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2060b8) {
            ctx->pc = 0x20610Cu;
            goto label_20610c;
        }
    }
    ctx->pc = 0x2060C0u;
    // 0x2060c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2060c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2060c4: 0x8423ec66  lh          $v1, -0x139A($at)
    ctx->pc = 0x2060c4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x2060c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2060c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2060cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2060ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2060d0: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x2060d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2060d4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2060D4u;
    {
        const bool branch_taken_0x2060d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2060d4) {
            ctx->pc = 0x20610Cu;
            goto label_20610c;
        }
    }
    ctx->pc = 0x2060DCu;
    // 0x2060dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2060dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2060e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2060e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2060e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2060e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2060e8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2060e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2060ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2060ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2060f0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2060f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2060f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2060f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2060f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2060f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2060fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2060fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206100: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x206104: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x206104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x206108: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20610c:
    // 0x20610c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x20610cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206114: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x206114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x206118: 0x3e00008  jr          $ra
    ctx->pc = 0x206118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206120u;
}
