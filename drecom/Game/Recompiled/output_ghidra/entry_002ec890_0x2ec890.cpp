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

// Function: entry_002ec890
// Address: 0x2ec890 - 0x2eca48
void entry_002ec890_0x2ec890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec890_0x2ec890");
#endif

    switch (ctx->pc) {
        case 0x2ec918u: goto label_2ec918;
        case 0x2ec948u: goto label_2ec948;
        case 0x2ec9bcu: goto label_2ec9bc;
        case 0x2ec9c8u: goto label_2ec9c8;
        case 0x2eca10u: goto label_2eca10;
        case 0x2eca30u: goto label_2eca30;
        default: break;
    }

    ctx->pc = 0x2ec890u;

    // 0x2ec890: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ec890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ec894: 0x2463a610  addiu       $v1, $v1, -0x59F0
    ctx->pc = 0x2ec894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ec898: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x2ec898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
    // 0x2ec89c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2ec89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2ec8a0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ec8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec8a4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ec8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec8a8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ec8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ec8ac: 0x12030066  beq         $s0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x2EC8ACu;
    {
        const bool branch_taken_0x2ec8ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ec8ac) {
            ctx->pc = 0x2ECA48u;
            return;
        }
    }
    ctx->pc = 0x2EC8B4u;
    // 0x2ec8b4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2ec8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2ec8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec8bc: 0x0  nop
    ctx->pc = 0x2ec8bcu;
    // NOP
    // 0x2ec8c0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2ec8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2ec8c4: 0x3c024133  lui         $v0, 0x4133
    ctx->pc = 0x2ec8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16691 << 16));
    // 0x2ec8c8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ec8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ec8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec8d0: 0x0  nop
    ctx->pc = 0x2ec8d0u;
    // NOP
    // 0x2ec8d4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2ec8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2ec8d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ec8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ec8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec8e0: 0x0  nop
    ctx->pc = 0x2ec8e0u;
    // NOP
    // 0x2ec8e4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2ec8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2ec8e8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ec8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ec8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec8f0: 0x0  nop
    ctx->pc = 0x2ec8f0u;
    // NOP
    // 0x2ec8f4: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2ec8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2ec8f8: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x2ec8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
    // 0x2ec8fc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2ec8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2ec900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec904: 0x0  nop
    ctx->pc = 0x2ec904u;
    // NOP
    // 0x2ec908: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2ec908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2ec90c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec910: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2EC910u;
    SET_GPR_U32(ctx, 31, 0x2EC918u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2EC910u, 0x2EC918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC918u;
label_2ec918:
    // 0x2ec918: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec91c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec920: 0x0  nop
    ctx->pc = 0x2ec920u;
    // NOP
    // 0x2ec924: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec928: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2ec928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2ec92c: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2ec92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2ec930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec934: 0x0  nop
    ctx->pc = 0x2ec934u;
    // NOP
    // 0x2ec938: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2ec938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2ec93c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ec93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ec940: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2EC940u;
    SET_GPR_U32(ctx, 31, 0x2EC948u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2EC940u, 0x2EC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC948u;
label_2ec948:
    // 0x2ec948: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ec948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2ec94c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec950: 0x0  nop
    ctx->pc = 0x2ec950u;
    // NOP
    // 0x2ec954: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec958: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2ec958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2ec95c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec964: 0x0  nop
    ctx->pc = 0x2ec964u;
    // NOP
    // 0x2ec968: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2ec968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2ec96c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ec96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2ec970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec974: 0x0  nop
    ctx->pc = 0x2ec974u;
    // NOP
    // 0x2ec978: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2ec978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2ec97c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2ec97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2ec980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec984: 0x0  nop
    ctx->pc = 0x2ec984u;
    // NOP
    // 0x2ec988: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2ec988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2ec98c: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ec98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec990: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ec990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ec994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec998: 0x0  nop
    ctx->pc = 0x2ec998u;
    // NOP
    // 0x2ec99c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2ec99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ec9a0: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ec9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ec9a4: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ec9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ec9a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec9a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec9ac: 0x0  nop
    ctx->pc = 0x2ec9acu;
    // NOP
    // 0x2ec9b0: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2ec9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2ec9b4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EC9B4u;
    SET_GPR_U32(ctx, 31, 0x2EC9BCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EC9B4u, 0x2EC9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9BCu;
label_2ec9bc:
    // 0x2ec9bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ec9bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ec9c0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x2EC9C0u;
    SET_GPR_U32(ctx, 31, 0x2EC9C8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x2EC9C0u, 0x2EC9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9C8u;
label_2ec9c8:
    // 0x2ec9c8: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2ec9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2ec9cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ec9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec9d0: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2ec9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ec9d4: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x2ec9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x2ec9d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec9dc: 0x0  nop
    ctx->pc = 0x2ec9dcu;
    // NOP
    // 0x2ec9e0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2ec9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2ec9e4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2ec9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2ec9e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec9e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec9ec: 0x0  nop
    ctx->pc = 0x2ec9ecu;
    // NOP
    // 0x2ec9f0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2ec9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2ec9f4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ec9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ec9f8: 0x34446666  ori         $a0, $v0, 0x6666
    ctx->pc = 0x2ec9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ec9fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ec9fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eca00: 0x0  nop
    ctx->pc = 0x2eca00u;
    // NOP
    // 0x2eca04: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2eca04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2eca08: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECA08u;
    SET_GPR_U32(ctx, 31, 0x2ECA10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECA08u, 0x2ECA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA10u;
label_2eca10:
    // 0x2eca10: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2eca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2eca14: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2eca14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2eca18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eca18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eca1c: 0x0  nop
    ctx->pc = 0x2eca1cu;
    // NOP
    // 0x2eca20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eca20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eca24: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2eca24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2eca28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECA28u;
    SET_GPR_U32(ctx, 31, 0x2ECA30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECA28u, 0x2ECA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA30u;
label_2eca30:
    // 0x2eca30: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2eca30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2eca34: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2eca34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2eca38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eca38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eca3c: 0x0  nop
    ctx->pc = 0x2eca3cu;
    // NOP
    // 0x2eca40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eca40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eca44: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2eca44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2eca48u;
}
