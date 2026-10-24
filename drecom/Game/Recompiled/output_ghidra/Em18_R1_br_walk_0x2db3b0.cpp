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

// Function: Em18_R1_br_walk
// Address: 0x2db3b0 - 0x2db618
void Em18_R1_br_walk_0x2db3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_R1_br_walk_0x2db3b0");
#endif

    switch (ctx->pc) {
        case 0x2db4acu: goto label_2db4ac;
        case 0x2db56cu: goto label_2db56c;
        case 0x2db5bcu: goto label_2db5bc;
        default: break;
    }

    ctx->pc = 0x2db3b0u;

    // 0x2db3b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db3b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2db3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2db3b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db3bc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2db3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2db3c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db3c4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2db3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2db3c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db3cc: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2db3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db3d0: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x2db3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x2db3d4: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x2db3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x2db3d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db3d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db3dc: 0x0  nop
    ctx->pc = 0x2db3dcu;
    // NOP
    // 0x2db3e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2db3e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db3e4: 0x0  nop
    ctx->pc = 0x2db3e4u;
    // NOP
    // 0x2db3e8: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x2DB3E8u;
    {
        const bool branch_taken_0x2db3e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db3e8) {
            ctx->pc = 0x2DB47Cu;
            goto label_2db47c;
        }
    }
    ctx->pc = 0x2DB3F0u;
    // 0x2db3f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db3f4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2db3f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2db3f8: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DB3F8u;
    {
        const bool branch_taken_0x2db3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db3f8) {
            ctx->pc = 0x2DB47Cu;
            goto label_2db47c;
        }
    }
    ctx->pc = 0x2DB400u;
    // 0x2db400: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x2db400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2db404: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB404u;
    {
        const bool branch_taken_0x2db404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db404) {
            ctx->pc = 0x2DB444u;
            goto label_2db444;
        }
    }
    ctx->pc = 0x2DB40Cu;
    // 0x2db40c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db410: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db414: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db418: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2db418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2db41c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db420: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db424: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db428: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db42c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db430: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db434: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db438: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db43c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2DB43Cu;
    {
        const bool branch_taken_0x2db43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db43c) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB444u;
label_2db444:
    // 0x2db444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db448: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db44c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db450: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2db450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2db454: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db458: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db45c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db460: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db464: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db468: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db46c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db470: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db474: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2DB474u;
    {
        const bool branch_taken_0x2db474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db474) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB47Cu;
label_2db47c:
    // 0x2db47c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db480: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2db480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db484: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x2db484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x2db488: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2db488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2db48c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db490: 0x0  nop
    ctx->pc = 0x2db490u;
    // NOP
    // 0x2db494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db498: 0x0  nop
    ctx->pc = 0x2db498u;
    // NOP
    // 0x2db49c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB49Cu;
    {
        const bool branch_taken_0x2db49c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db49c) {
            ctx->pc = 0x2DB52Cu;
            goto label_2db52c;
        }
    }
    ctx->pc = 0x2DB4A4u;
    // 0x2db4a4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB4A4u;
    SET_GPR_U32(ctx, 31, 0x2DB4ACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB4A4u, 0x2DB4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4ACu;
label_2db4ac:
    // 0x2db4ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db4b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2db4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2db4b4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB4B4u;
    {
        const bool branch_taken_0x2db4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db4b4) {
            ctx->pc = 0x2DB4F4u;
            goto label_2db4f4;
        }
    }
    ctx->pc = 0x2DB4BCu;
    // 0x2db4bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db4c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db4c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2db4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db4cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db4d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db4dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db4e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db4ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DB4ECu;
    {
        const bool branch_taken_0x2db4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db4ec) {
            ctx->pc = 0x2DB524u;
            goto label_2db524;
        }
    }
    ctx->pc = 0x2DB4F4u;
label_2db4f4:
    // 0x2db4f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db4f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db500: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2db500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2db504: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db508: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db50c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db510: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db514: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db518: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db51c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db520: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2db524:
    // 0x2db524: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2DB524u;
    {
        const bool branch_taken_0x2db524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db524) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB52Cu;
label_2db52c:
    // 0x2db52c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db530: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2db530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2db534: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DB534u;
    {
        const bool branch_taken_0x2db534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db534) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB53Cu;
    // 0x2db53c: 0x920300db  lbu         $v1, 0xDB($s0)
    ctx->pc = 0x2db53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db540: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2db540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2db544: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2db544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2db548: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2DB548u;
    {
        const bool branch_taken_0x2db548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db548) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB550u;
    // 0x2db550: 0x920200db  lbu         $v0, 0xDB($s0)
    ctx->pc = 0x2db550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 219)));
    // 0x2db554: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2db554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db558: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2db558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2db55c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB55Cu;
    {
        const bool branch_taken_0x2db55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db55c) {
            ctx->pc = 0x2DB5B4u;
            goto label_2db5b4;
        }
    }
    ctx->pc = 0x2DB564u;
    // 0x2db564: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB564u;
    SET_GPR_U32(ctx, 31, 0x2DB56Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB564u, 0x2DB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB56Cu;
label_2db56c:
    // 0x2db56c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db570: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2db570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2db574: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB574u;
    {
        const bool branch_taken_0x2db574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db574) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB57Cu;
    // 0x2db57c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db580: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db584: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db588: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db58c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db590: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db594: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db598: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db59c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5a0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db5a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db5ac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB5ACu;
    {
        const bool branch_taken_0x2db5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5ac) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB5B4u;
label_2db5b4:
    // 0x2db5b4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB5B4u;
    SET_GPR_U32(ctx, 31, 0x2DB5BCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB5B4u, 0x2DB5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB5BCu;
label_2db5bc:
    // 0x2db5bc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db5c0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2db5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2db5c4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB5C4u;
    {
        const bool branch_taken_0x2db5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db5c4) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB5CCu;
    // 0x2db5cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db5d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db5d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db5dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db5e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db5ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db5f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db5f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db5fc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DB5FCu;
    {
        const bool branch_taken_0x2db5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5fc) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB604u;
label_2db604:
    // 0x2db604: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2db604u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db60c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2db60cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2db610: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB618u;
}
