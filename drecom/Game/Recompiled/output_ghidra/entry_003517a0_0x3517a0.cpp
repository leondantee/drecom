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

// Function: entry_003517a0
// Address: 0x3517a0 - 0x3519a0
void entry_003517a0_0x3517a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003517a0_0x3517a0");
#endif

    switch (ctx->pc) {
        case 0x3517ecu: goto label_3517ec;
        default: break;
    }

    ctx->pc = 0x3517a0u;

    // 0x3517a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3517a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3517a4: 0x0  nop
    ctx->pc = 0x3517a4u;
    // NOP
    // 0x3517a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3517a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3517ac: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x3517acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
    // 0x3517b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3517b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3517b4: 0x0  nop
    ctx->pc = 0x3517b4u;
    // NOP
    // 0x3517b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x3517b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3517bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3517bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3517c0: 0x0  nop
    ctx->pc = 0x3517c0u;
    // NOP
    // 0x3517c4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3517c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3517c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3517c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3517cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3517ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3517d0: 0x0  nop
    ctx->pc = 0x3517d0u;
    // NOP
    // 0x3517d4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3517d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3517d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3517d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3517dc: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3517dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3517e0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3517e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3517e4: 0xc0d5c00  jal         func_357000
    ctx->pc = 0x3517E4u;
    SET_GPR_U32(ctx, 31, 0x3517ECu);
    ctx->pc = 0x357000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357000u, 0x3517E4u, 0x3517ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3517ECu;
label_3517ec:
    // 0x3517ec: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3517ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3517f0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x3517f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3517f4: 0x90a600c4  lbu         $a2, 0xC4($a1)
    ctx->pc = 0x3517f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x3517f8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3517f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3517fc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x3517fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x351800: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x351800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x351804: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x351804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x351808: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x35180c: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x35180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351810: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x351810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x351814: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x351814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x351818: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x351818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x35181c: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x35181cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x351820: 0xaca4007c  sw          $a0, 0x7C($a1)
    ctx->pc = 0x351820u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 4));
    // 0x351824: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x351824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x351828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35182c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x35182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351830: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x351834: 0x906400c4  lbu         $a0, 0xC4($v1)
    ctx->pc = 0x351834u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351838: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x351838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x35183c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x35183cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x351840: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x351840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x351844: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x351844u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x351848: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x35184c: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x35184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351850: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x351850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351854: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x351854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x351858: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x351858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x35185c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35185cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351860: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351864: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x351868: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x351868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x35186c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x35186cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x351870: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x351870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x351874: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x351874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x351878: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35187c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35187cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351880: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351884: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351888: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x351888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x35188c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x35188cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x351890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351894: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351898: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x351898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x35189c: 0x906300c4  lbu         $v1, 0xC4($v1)
    ctx->pc = 0x35189cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3518a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3518a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3518a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3518a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3518a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3518a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3518ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3518acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3518b0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3518b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3518b4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x3518b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x3518b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3518b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3518bc: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x3518bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x3518c0: 0x3c043f48  lui         $a0, 0x3F48
    ctx->pc = 0x3518c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16200 << 16));
    // 0x3518c4: 0x3483c8c9  ori         $v1, $a0, 0xC8C9
    ctx->pc = 0x3518c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51401);
    // 0x3518c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3518c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3518cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3518ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3518d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3518d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3518d4: 0x906500c4  lbu         $a1, 0xC4($v1)
    ctx->pc = 0x3518d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3518d8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x3518d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3518dc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3518dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3518e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3518e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3518e4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3518e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3518e8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3518e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3518ec: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x3518ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x3518f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3518f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3518f4: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x3518f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x3518f8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3518f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3518fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3518fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351900: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351904: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x351904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351908: 0x906500c4  lbu         $a1, 0xC4($v1)
    ctx->pc = 0x351908u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x35190c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x35190cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x351910: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x351914: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351918: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351918u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35191c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x35191cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351920: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x351924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x351924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351928: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x351928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x35192c: 0x3c043f10  lui         $a0, 0x3F10
    ctx->pc = 0x35192cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16144 << 16));
    // 0x351930: 0x34839091  ori         $v1, $a0, 0x9091
    ctx->pc = 0x351930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)37009);
    // 0x351934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351938: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35193c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x351940: 0x906500c4  lbu         $a1, 0xC4($v1)
    ctx->pc = 0x351940u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x351944: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x351944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x351948: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x351948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35194c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351950: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x351950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x351954: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x351954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x351958: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x351958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x35195c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35195cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x351960: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x351960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x351964: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x351964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351968: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x351968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x35196c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x35196cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x351970: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x351970u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x351974: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x351974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x351978: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x351978u;
    {
        const bool branch_taken_0x351978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x351978) {
            ctx->pc = 0x3519A0u;
            return;
        }
    }
    ctx->pc = 0x351980u;
    // 0x351980: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x351980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x351984: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x351984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x351988: 0x247101b0  addiu       $s1, $v1, 0x1B0
    ctx->pc = 0x351988u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x35198c: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x35198cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x351990: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x351990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x351994: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x351994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x351998: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x351998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x35199c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x35199cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3519a0u;
}
