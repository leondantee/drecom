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

// Function: Em0f_R1_br_walk
// Address: 0x30c670 - 0x30cab4
void Em0f_R1_br_walk_0x30c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_br_walk_0x30c670");
#endif

    switch (ctx->pc) {
        case 0x30c790u: goto label_30c790;
        case 0x30c820u: goto label_30c820;
        case 0x30c8acu: goto label_30c8ac;
        case 0x30c910u: goto label_30c910;
        case 0x30c9b4u: goto label_30c9b4;
        case 0x30ca68u: goto label_30ca68;
        default: break;
    }

    ctx->pc = 0x30c670u;

    // 0x30c670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30c674: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30c674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30c678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c67c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x30c680: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c684: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30c684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30c688: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30c688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30c68c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x30c68cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30c690: 0x10200103  beqz        $at, . + 4 + (0x103 << 2)
    ctx->pc = 0x30C690u;
    {
        const bool branch_taken_0x30c690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c690) {
            ctx->pc = 0x30CAA0u;
            goto label_30caa0;
        }
    }
    ctx->pc = 0x30C698u;
    // 0x30c698: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c69c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x30c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c6a0: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x30c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x30c6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c6a8: 0x0  nop
    ctx->pc = 0x30c6a8u;
    // NOP
    // 0x30c6ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30c6acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c6b0: 0x0  nop
    ctx->pc = 0x30c6b0u;
    // NOP
    // 0x30c6b4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x30C6B4u;
    {
        const bool branch_taken_0x30c6b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c6b4) {
            ctx->pc = 0x30C6ECu;
            goto label_30c6ec;
        }
    }
    ctx->pc = 0x30C6BCu;
    // 0x30c6bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c6c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c6c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c6c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c6cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c6d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30c6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c6d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c6d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c6dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c6e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c6e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c6e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30c6ec:
    // 0x30c6ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c6f0: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x30c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30c6f4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x30c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x30c6f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30c6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30c6fc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30C6FCu;
    {
        const bool branch_taken_0x30c6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c6fc) {
            ctx->pc = 0x30C73Cu;
            goto label_30c73c;
        }
    }
    ctx->pc = 0x30C704u;
    // 0x30c704: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c708: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c70c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c70cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c710: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30c710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c718: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30c718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c71c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c720: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c724: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c728: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c72c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c730: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30c734: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x30C734u;
    {
        const bool branch_taken_0x30c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c734) {
            ctx->pc = 0x30CAA0u;
            goto label_30caa0;
        }
    }
    ctx->pc = 0x30C73Cu;
label_30c73c:
    // 0x30c73c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c740: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x30c740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c744: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x30c744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x30c748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30c748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c74c: 0x0  nop
    ctx->pc = 0x30c74cu;
    // NOP
    // 0x30c750: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c754: 0x0  nop
    ctx->pc = 0x30c754u;
    // NOP
    // 0x30c758: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x30C758u;
    {
        const bool branch_taken_0x30c758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c758) {
            ctx->pc = 0x30C7C8u;
            goto label_30c7c8;
        }
    }
    ctx->pc = 0x30C760u;
    // 0x30c760: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x30c760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x30c764: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30c764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30c768: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30c768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30c76c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c770: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30c770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c774: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c778: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30c778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30c77c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30c77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c780: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30c780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30c784: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30c784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30c788: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30C788u;
    SET_GPR_U32(ctx, 31, 0x30C790u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30C788u, 0x30C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C790u;
label_30c790:
    // 0x30c790: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C790u;
    {
        const bool branch_taken_0x30c790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c790) {
            ctx->pc = 0x30C7C8u;
            goto label_30c7c8;
        }
    }
    ctx->pc = 0x30C798u;
    // 0x30c798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c79c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7a0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x30c7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c7a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x30c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30c7a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7ac: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x30c7acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c7b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7b4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x30c7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c7b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7bc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x30c7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c7c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x30c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_30c7c8:
    // 0x30c7c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7cc: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x30c7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c7d0: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x30c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
    // 0x30c7d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x30c7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x30c7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30c7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c7dc: 0x0  nop
    ctx->pc = 0x30c7dcu;
    // NOP
    // 0x30c7e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c7e4: 0x0  nop
    ctx->pc = 0x30c7e4u;
    // NOP
    // 0x30c7e8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x30C7E8u;
    {
        const bool branch_taken_0x30c7e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c7e8) {
            ctx->pc = 0x30C858u;
            goto label_30c858;
        }
    }
    ctx->pc = 0x30C7F0u;
    // 0x30c7f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7f4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c7f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7fc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x30c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x30c800: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30c800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30c804: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30c804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30c808: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30c808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30c80c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c810: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30c810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30c814: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30c814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30c818: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30C818u;
    SET_GPR_U32(ctx, 31, 0x30C820u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30C818u, 0x30C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C820u;
label_30c820:
    // 0x30c820: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C820u;
    {
        const bool branch_taken_0x30c820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c820) {
            ctx->pc = 0x30C858u;
            goto label_30c858;
        }
    }
    ctx->pc = 0x30C828u;
    // 0x30c828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c82c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c830: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x30c830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c834: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x30c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30c838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c83c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x30c83cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c840: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c844: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x30c844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c84c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x30c84cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c850: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c854: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x30c854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_30c858:
    // 0x30c858: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c85c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30c85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30c860: 0x8c22efa8  lw          $v0, -0x1058($at)
    ctx->pc = 0x30c860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x30c864: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30C864u;
    {
        const bool branch_taken_0x30c864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30c864) {
            ctx->pc = 0x30C8F0u;
            goto label_30c8f0;
        }
    }
    ctx->pc = 0x30C86Cu;
    // 0x30c86c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c870: 0x8c421344  lw          $v0, 0x1344($v0)
    ctx->pc = 0x30c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4932)));
    // 0x30c874: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x30C874u;
    {
        const bool branch_taken_0x30c874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c874) {
            ctx->pc = 0x30C8F0u;
            goto label_30c8f0;
        }
    }
    ctx->pc = 0x30C87Cu;
    // 0x30c87c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30c880: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30c880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30c884: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30c884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30c888: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c88c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c890: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c894: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30c894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30c898: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30c898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c89c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30c8a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30c8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30c8a4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30C8A4u;
    SET_GPR_U32(ctx, 31, 0x30C8ACu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30C8A4u, 0x30C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C8ACu;
label_30c8ac:
    // 0x30c8ac: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30C8ACu;
    {
        const bool branch_taken_0x30c8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c8ac) {
            ctx->pc = 0x30C8F0u;
            goto label_30c8f0;
        }
    }
    ctx->pc = 0x30C8B4u;
    // 0x30c8b4: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x30c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x30c8b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8bc: 0xac431344  sw          $v1, 0x1344($v0)
    ctx->pc = 0x30c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 3));
    // 0x30c8c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c8c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8c8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x30c8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c8cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c8d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8d4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x30c8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c8d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8dc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x30c8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c8e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8e4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x30c8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c8e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x30c8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_30c8f0:
    // 0x30c8f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c8f8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x30c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x30c8fc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30c8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c900: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30c904: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30c904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30c908: 0xc05cc90  jal         func_173240
    ctx->pc = 0x30C908u;
    SET_GPR_U32(ctx, 31, 0x30C910u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x30C908u, 0x30C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C910u;
label_30c910:
    // 0x30c910: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30c910u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30c914: 0x32030004  andi        $v1, $s0, 0x4
    ctx->pc = 0x30c914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x30c918: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x30C918u;
    {
        const bool branch_taken_0x30c918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c918) {
            ctx->pc = 0x30C95Cu;
            goto label_30c95c;
        }
    }
    ctx->pc = 0x30C920u;
    // 0x30c920: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x30c920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x30c924: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30C924u;
    {
        const bool branch_taken_0x30c924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c924) {
            ctx->pc = 0x30C95Cu;
            goto label_30c95c;
        }
    }
    ctx->pc = 0x30C92Cu;
    // 0x30c92c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c930: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c934: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c938: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x30c938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c93c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c940: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30c940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c944: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c948: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c94c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c950: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c954: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c958: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30c95c:
    // 0x30c95c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c960: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x30c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c964: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x30c964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x30c968: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x30c968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x30c96c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c96cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c970: 0x0  nop
    ctx->pc = 0x30c970u;
    // NOP
    // 0x30c974: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30c974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c978: 0x0  nop
    ctx->pc = 0x30c978u;
    // NOP
    // 0x30c97c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x30C97Cu;
    {
        const bool branch_taken_0x30c97c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c97c) {
            ctx->pc = 0x30C9ECu;
            goto label_30c9ec;
        }
    }
    ctx->pc = 0x30C984u;
    // 0x30c984: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c988: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c98c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c990: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30c990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30c994: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30c998: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30c998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30c99c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30c9a0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30c9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c9a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30c9a8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30c9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30c9ac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30C9ACu;
    SET_GPR_U32(ctx, 31, 0x30C9B4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30C9ACu, 0x30C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C9B4u;
label_30c9b4:
    // 0x30c9b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C9B4u;
    {
        const bool branch_taken_0x30c9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c9b4) {
            ctx->pc = 0x30C9ECu;
            goto label_30c9ec;
        }
    }
    ctx->pc = 0x30C9BCu;
    // 0x30c9bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c9c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30c9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c9c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x30c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30c9cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30c9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30c9d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30c9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c9dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30c9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c9e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30c9ec:
    // 0x30c9ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c9f0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x30c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c9f4: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x30c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x30c9f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30c9f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c9fc: 0x0  nop
    ctx->pc = 0x30c9fcu;
    // NOP
    // 0x30ca00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30ca00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ca04: 0x0  nop
    ctx->pc = 0x30ca04u;
    // NOP
    // 0x30ca08: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x30CA08u;
    {
        const bool branch_taken_0x30ca08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ca08) {
            ctx->pc = 0x30CAA0u;
            goto label_30caa0;
        }
    }
    ctx->pc = 0x30CA10u;
    // 0x30ca10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca14: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x30ca14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ca18: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x30ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x30ca1c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x30ca1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x30ca20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30ca20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ca24: 0x0  nop
    ctx->pc = 0x30ca24u;
    // NOP
    // 0x30ca28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30ca28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ca2c: 0x0  nop
    ctx->pc = 0x30ca2cu;
    // NOP
    // 0x30ca30: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x30CA30u;
    {
        const bool branch_taken_0x30ca30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30ca30) {
            ctx->pc = 0x30CAA0u;
            goto label_30caa0;
        }
    }
    ctx->pc = 0x30CA38u;
    // 0x30ca38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca3c: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30ca40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca44: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x30ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x30ca48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30ca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30ca4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30ca4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30ca50: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30ca54: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30ca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ca58: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30ca5c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30ca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30ca60: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30CA60u;
    SET_GPR_U32(ctx, 31, 0x30CA68u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30CA60u, 0x30CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CA68u;
label_30ca68:
    // 0x30ca68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CA68u;
    {
        const bool branch_taken_0x30ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ca68) {
            ctx->pc = 0x30CAA0u;
            goto label_30caa0;
        }
    }
    ctx->pc = 0x30CA70u;
    // 0x30ca70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ca74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30ca78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ca7c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x30ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30ca80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30ca84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30ca88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30ca8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ca90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30ca94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ca98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ca9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30caa0:
    // 0x30caa0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30caa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30caa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30caa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30caa8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30caa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30caac: 0x3e00008  jr          $ra
    ctx->pc = 0x30CAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CAB4u;
}
