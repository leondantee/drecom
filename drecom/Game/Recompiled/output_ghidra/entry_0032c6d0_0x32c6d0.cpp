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

// Function: entry_0032c6d0
// Address: 0x32c6d0 - 0x32c8d8
void entry_0032c6d0_0x32c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c6d0_0x32c6d0");
#endif

    switch (ctx->pc) {
        case 0x32c760u: goto label_32c760;
        case 0x32c77cu: goto label_32c77c;
        case 0x32c7b0u: goto label_32c7b0;
        case 0x32c7ccu: goto label_32c7cc;
        case 0x32c800u: goto label_32c800;
        case 0x32c81cu: goto label_32c81c;
        case 0x32c850u: goto label_32c850;
        case 0x32c874u: goto label_32c874;
        case 0x32c8d4u: goto label_32c8d4;
        default: break;
    }

    ctx->pc = 0x32c6d0u;

    // 0x32c6d0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32c6d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32c6d8: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x32c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x32c6dc: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x32c6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x32c6e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32c6e4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x32c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32c6e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32c6ec: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x32c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x32c6f0: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x32c6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x32c6f4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x32c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x32c6f8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32c6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32c6fc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32c6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c700: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x32c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x32c704: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x32c704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x32c708: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x32c708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c70c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32c710: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x32c710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x32c714: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c718: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x32c718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x32c71c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c720: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x32c720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x32c724: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c728: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x32c728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x32c72c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x32c72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c730: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x32c730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x32c734: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x32c734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c738: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32c738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x32c73c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c740: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x32c740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x32c744: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x32c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c748: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x32c748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x32c74c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x32c74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c750: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x32c750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x32c754: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x32c754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c758: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C758u;
    SET_GPR_U32(ctx, 31, 0x32C760u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C758u, 0x32C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C760u;
label_32c760:
    // 0x32c760: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32c760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32c764: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32c768: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32c768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32c76c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x32c76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x32c770: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x32c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c774: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C774u;
    SET_GPR_U32(ctx, 31, 0x32C77Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C774u, 0x32C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C77Cu;
label_32c77c:
    // 0x32c77c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32c780: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32c784: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32c784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32c788: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x32c788u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32c78c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32c790: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x32c790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32c794: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32c794u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x32c798: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32c79c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x32c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32c7a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32c7a4: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x32c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c7a8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C7A8u;
    SET_GPR_U32(ctx, 31, 0x32C7B0u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C7A8u, 0x32C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C7B0u;
label_32c7b0:
    // 0x32c7b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32c7b4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32c7b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32c7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32c7bc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x32c7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x32c7c0: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x32c7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c7c4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C7C4u;
    SET_GPR_U32(ctx, 31, 0x32C7CCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C7C4u, 0x32C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C7CCu;
label_32c7cc:
    // 0x32c7cc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32c7d0: 0x24467900  addiu       $a2, $v0, 0x7900
    ctx->pc = 0x32c7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32c7d4: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x32c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x32c7d8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x32c7d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32c7dc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32c7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c7e0: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x32c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32c7e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32c7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32c7e8: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32c7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32c7ec: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x32c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x32c7f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32c7f4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x32c7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c7f8: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C7F8u;
    SET_GPR_U32(ctx, 31, 0x32C800u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C7F8u, 0x32C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C800u;
label_32c800:
    // 0x32c800: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x32c800u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32c804: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x32c804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x32c808: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32c808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32c80c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x32c80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x32c810: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x32c810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c814: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C814u;
    SET_GPR_U32(ctx, 31, 0x32C81Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C814u, 0x32C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C81Cu;
label_32c81c:
    // 0x32c81c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32c820: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32c824: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32c824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32c828: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x32c828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x32c82c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x32c82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c830: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x32c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x32c834: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32c834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32c838: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32c838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32c83c: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x32c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x32c840: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32c840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32c844: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x32c844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c848: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C848u;
    SET_GPR_U32(ctx, 31, 0x32C850u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C848u, 0x32C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C850u;
label_32c850:
    // 0x32c850: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32c850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32c854: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x32c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32c858: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x32c858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x32c85c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x32c85cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32c860: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32c860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32c864: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x32c864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x32c868: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x32c868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32c86c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32C86Cu;
    SET_GPR_U32(ctx, 31, 0x32C874u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32C86Cu, 0x32C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C874u;
label_32c874:
    // 0x32c874: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32c874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32c878: 0x24677900  addiu       $a3, $v1, 0x7900
    ctx->pc = 0x32c878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x32c87c: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x32c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x32c880: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x32c880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32c884: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x32c884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32c888: 0x2603004c  addiu       $v1, $s0, 0x4C
    ctx->pc = 0x32c888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x32c88c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32c88cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x32c890: 0x3406fffc  ori         $a2, $zero, 0xFFFC
    ctx->pc = 0x32c890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32c894: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x32c894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x32c898: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32c898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x32c89c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x32c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x32c8a0: 0x2442e870  addiu       $v0, $v0, -0x1790
    ctx->pc = 0x32c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961264));
    // 0x32c8a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x32c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x32c8a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32c8ac: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x32c8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32c8b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32c8b4: 0x92622830  lbu         $v0, 0x2830($s3)
    ctx->pc = 0x32c8b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10288)));
    // 0x32c8b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32C8B8u;
    {
        const bool branch_taken_0x32c8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c8b8) {
            ctx->pc = 0x32C8D8u;
            return;
        }
    }
    ctx->pc = 0x32C8C0u;
    // 0x32c8c0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x32c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x32c8c4: 0x24441a14  addiu       $a0, $v0, 0x1A14
    ctx->pc = 0x32c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6676));
    // 0x32c8c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32c8c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32c8cc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32C8CCu;
    SET_GPR_U32(ctx, 31, 0x32C8D4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32C8CCu, 0x32C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8D4u;
label_32c8d4:
    // 0x32c8d4: 0x0  nop
    ctx->pc = 0x32c8d4u;
    // NOP
    ctx->pc = 0x32c8d8u;
}
