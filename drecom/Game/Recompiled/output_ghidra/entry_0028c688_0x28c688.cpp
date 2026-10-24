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

// Function: entry_0028c688
// Address: 0x28c688 - 0x28c9e4
void entry_0028c688_0x28c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c688_0x28c688");
#endif

    switch (ctx->pc) {
        case 0x28c69cu: goto label_28c69c;
        case 0x28c740u: goto label_28c740;
        case 0x28c75cu: goto label_28c75c;
        case 0x28c790u: goto label_28c790;
        case 0x28c7b0u: goto label_28c7b0;
        case 0x28c7e8u: goto label_28c7e8;
        case 0x28c80cu: goto label_28c80c;
        case 0x28c840u: goto label_28c840;
        case 0x28c864u: goto label_28c864;
        case 0x28c930u: goto label_28c930;
        case 0x28c944u: goto label_28c944;
        case 0x28c974u: goto label_28c974;
        case 0x28c984u: goto label_28c984;
        case 0x28c994u: goto label_28c994;
        case 0x28c9a4u: goto label_28c9a4;
        default: break;
    }

    ctx->pc = 0x28c688u;

    // 0x28c688: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x28c688u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28c68c: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28C68Cu;
    {
        const bool branch_taken_0x28c68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c68c) {
            ctx->pc = 0x28C62Cu;
            return;
        }
    }
    ctx->pc = 0x28C694u;
    // 0x28c694: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x28C694u;
    SET_GPR_U32(ctx, 31, 0x28C69Cu);
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x28C694u, 0x28C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C69Cu;
label_28c69c:
    // 0x28c69c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28c69cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c6a0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x28c6a4: 0x2463e910  addiu       $v1, $v1, -0x16F0
    ctx->pc = 0x28c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961424));
    // 0x28c6a8: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x28c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x28c6ac: 0x26125d70  addiu       $s2, $s0, 0x5D70
    ctx->pc = 0x28c6acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 23920));
    // 0x28c6b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28c6b4: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x28c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x28c6b8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x28c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x28c6bc: 0x3466103b  ori         $a2, $v1, 0x103B
    ctx->pc = 0x28c6bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4155);
    // 0x28c6c0: 0xaee60004  sw          $a2, 0x4($s7)
    ctx->pc = 0x28c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 6));
    // 0x28c6c4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x28c6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28c6c8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x28c6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28c6cc: 0xfee30008  sd          $v1, 0x8($s7)
    ctx->pc = 0x28c6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 3));
    // 0x28c6d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c6d4: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x28c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28c6d8: 0x24480018  addiu       $t0, $v0, 0x18
    ctx->pc = 0x28c6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x28c6dc: 0x91060004  lbu         $a2, 0x4($t0)
    ctx->pc = 0x28c6dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28c6e0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x28c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28c6e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28c6e8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x28c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x28c6ec: 0xc33824  and         $a3, $a2, $v1
    ctx->pc = 0x28c6ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x28c6f0: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x28c6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x28c6f4: 0xa1020004  sb          $v0, 0x4($t0)
    ctx->pc = 0x28c6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x28c6f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28c6fc: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x28c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x28c700: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28c700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28c704: 0x34461043  ori         $a2, $v0, 0x1043
    ctx->pc = 0x28c704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x28c708: 0xaec60004  sw          $a2, 0x4($s6)
    ctx->pc = 0x28c708u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 6));
    // 0x28c70c: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x28c70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x28c710: 0xfec70008  sd          $a3, 0x8($s6)
    ctx->pc = 0x28c710u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 7));
    // 0x28c714: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28c714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28c718: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28c718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28c71c: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x28c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x28c720: 0x34463a14  ori         $a2, $v0, 0x3A14
    ctx->pc = 0x28c720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x28c724: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x28c724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x28c728: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28c728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28c72c: 0x34460040  ori         $a2, $v0, 0x40
    ctx->pc = 0x28c72cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28c730: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x28c730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x28c734: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x28c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c738: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C738u;
    SET_GPR_U32(ctx, 31, 0x28C740u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C738u, 0x28C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C740u;
label_28c740:
    // 0x28c740: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28c740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28c744: 0x24667000  addiu       $a2, $v1, 0x7000
    ctx->pc = 0x28c744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x28c748: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x28c748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x28c74c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x28c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x28c750: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x28c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c754: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C754u;
    SET_GPR_U32(ctx, 31, 0x28C75Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C754u, 0x28C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C75Cu;
label_28c75c:
    // 0x28c75c: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x28c75cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c760: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x28c760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x28c764: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28c764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c768: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x28c768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x28c76c: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x28c76cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c770: 0x2626001c  addiu       $a2, $s1, 0x1C
    ctx->pc = 0x28c770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x28c774: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x28c774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x28c778: 0x3408fffb  ori         $t0, $zero, 0xFFFB
    ctx->pc = 0x28c778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c77c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x28c77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28c780: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x28c780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x28c784: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x28c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c788: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C788u;
    SET_GPR_U32(ctx, 31, 0x28C790u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C788u, 0x28C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C790u;
label_28c790:
    // 0x28c790: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x28c790u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c794: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x28c794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x28c798: 0x24c37000  addiu       $v1, $a2, 0x7000
    ctx->pc = 0x28c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x28c79c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x28c79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c7a0: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x28c7a4: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x28c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c7a8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C7A8u;
    SET_GPR_U32(ctx, 31, 0x28C7B0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C7A8u, 0x28C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7B0u;
label_28c7b0:
    // 0x28c7b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c7b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c7b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28c7b8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x28c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x28c7bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c7c0: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x28c7c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x28c7c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x28c7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c7c8: 0x2622002c  addiu       $v0, $s1, 0x2C
    ctx->pc = 0x28c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x28c7cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c7d0: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28c7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c7d4: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x28c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28c7d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28c7dc: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x28c7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c7e0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C7E0u;
    SET_GPR_U32(ctx, 31, 0x28C7E8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C7E0u, 0x28C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C7E8u;
label_28c7e8:
    // 0x28c7e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28c7ec: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28c7f0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x28c7f4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x28c7f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28c7f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28c7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c7fc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28c7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x28c800: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x28c800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c804: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C804u;
    SET_GPR_U32(ctx, 31, 0x28C80Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C804u, 0x28C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C80Cu;
label_28c80c:
    // 0x28c80c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c810: 0x24467900  addiu       $a2, $v0, 0x7900
    ctx->pc = 0x28c810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28c814: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28c814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28c818: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x28c818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28c81c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28c81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28c820: 0x2626003c  addiu       $a2, $s1, 0x3C
    ctx->pc = 0x28c820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x28c824: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x28c824u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x28c828: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x28c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c82c: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x28c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x28c830: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c830u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c834: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x28c834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c838: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C838u;
    SET_GPR_U32(ctx, 31, 0x28C840u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C838u, 0x28C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C840u;
label_28c840:
    // 0x28c840: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28c840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28c844: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x28c844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x28c848: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x28c84c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x28c84cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28c850: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28c850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c854: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28c854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28c858: 0xc64c0034  lwc1        $f12, 0x34($s2)
    ctx->pc = 0x28c858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28c85c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C85Cu;
    SET_GPR_U32(ctx, 31, 0x28C864u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C85Cu, 0x28C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C864u;
label_28c864:
    // 0x28c864: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28c864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c868: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x28c868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x28c86c: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x28c86cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c870: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28c870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28c874: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x28c874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x28c878: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x28c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x28c87c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c880: 0x3406fffb  ori         $a2, $zero, 0xFFFB
    ctx->pc = 0x28c880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c884: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x28c884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x28c888: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x28c888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x28c88c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x28c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x28c890: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x28c890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x28c894: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28c894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28c898: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28c898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28c89c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28c89cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28c8a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c8a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c8a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8a8: 0x0  nop
    ctx->pc = 0x28c8a8u;
    // NOP
    // 0x28c8ac: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x28c8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x28c8b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c8b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8b4: 0x0  nop
    ctx->pc = 0x28c8b4u;
    // NOP
    // 0x28c8b8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x28c8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x28c8bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28c8c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8c4: 0x0  nop
    ctx->pc = 0x28c8c4u;
    // NOP
    // 0x28c8c8: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x28c8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x28c8cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c8ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8d0: 0x0  nop
    ctx->pc = 0x28c8d0u;
    // NOP
    // 0x28c8d4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x28c8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x28c8d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28c8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8dc: 0x0  nop
    ctx->pc = 0x28c8dcu;
    // NOP
    // 0x28c8e0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x28c8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x28c8e4: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x28c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
    // 0x28c8e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8ec: 0x0  nop
    ctx->pc = 0x28c8ecu;
    // NOP
    // 0x28c8f0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x28c8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x28c8f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28c8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c8fc: 0x0  nop
    ctx->pc = 0x28c8fcu;
    // NOP
    // 0x28c900: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x28c900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x28c904: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x28c904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
    // 0x28c908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28c908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c90c: 0x0  nop
    ctx->pc = 0x28c90cu;
    // NOP
    // 0x28c910: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x28c910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    // 0x28c914: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x28c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28c918: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x28c918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x28c91c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x28c91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c920: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28c920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c924: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x28c924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x28c928: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C928u;
    SET_GPR_U32(ctx, 31, 0x28C930u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C928u, 0x28C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C930u;
label_28c930:
    // 0x28c930: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x28c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c934: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c938: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28c938u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28c93c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C93Cu;
    SET_GPR_U32(ctx, 31, 0x28C944u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C93Cu, 0x28C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C944u;
label_28c944:
    // 0x28c944: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28c944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28c948: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x28c948u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x28c94c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x28c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x28c950: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28c950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28c954: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28c954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28c958: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x28c958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x28c95c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x28c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x28c960: 0xffc00008  sd          $zero, 0x8($fp)
    ctx->pc = 0x28c960u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 0));
    // 0x28c964: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x28c964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c968: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x28c968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28c96c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C96Cu;
    SET_GPR_U32(ctx, 31, 0x28C974u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C96Cu, 0x28C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C974u;
label_28c974:
    // 0x28c974: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x28c974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c978: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x28c978u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x28c97c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C97Cu;
    SET_GPR_U32(ctx, 31, 0x28C984u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C97Cu, 0x28C984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C984u;
label_28c984:
    // 0x28c984: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x28c984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c988: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x28c988u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x28c98c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C98Cu;
    SET_GPR_U32(ctx, 31, 0x28C994u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C98Cu, 0x28C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C994u;
label_28c994:
    // 0x28c994: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x28c994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x28c998: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x28c998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x28c99c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C99Cu;
    SET_GPR_U32(ctx, 31, 0x28C9A4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C99Cu, 0x28C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C9A4u;
label_28c9a4:
    // 0x28c9a4: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28c9a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28c9a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28c9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28c9ac: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x28C9ACu;
    {
        const bool branch_taken_0x28c9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c9ac) {
            ctx->pc = 0x28CB58u;
            return;
        }
    }
    ctx->pc = 0x28C9B4u;
    // 0x28c9b4: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28c9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28c9b8: 0x8024bf38  lb          $a0, -0x40C8($at)
    ctx->pc = 0x28c9b8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x62BF38u));
    // 0x28c9bc: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x28c9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x28c9c0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28c9c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28c9c4: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x28c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28c9c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c9cc: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x28C9CCu;
    {
        const bool branch_taken_0x28c9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28c9cc) {
            ctx->pc = 0x28CAD8u;
            return;
        }
    }
    ctx->pc = 0x28C9D4u;
    // 0x28c9d4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C9D4u;
    {
        const bool branch_taken_0x28c9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c9d4) {
            ctx->pc = 0x28C9E4u;
            return;
        }
    }
    ctx->pc = 0x28C9DCu;
    // 0x28c9dc: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x28C9DCu;
    {
        const bool branch_taken_0x28c9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c9dc) {
            ctx->pc = 0x28CBACu;
            return;
        }
    }
    ctx->pc = 0x28C9E4u;
}
