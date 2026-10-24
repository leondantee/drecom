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

// Function: entry_00170908
// Address: 0x170908 - 0x1709e0
void entry_00170908_0x170908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170908_0x170908");
#endif

    switch (ctx->pc) {
        case 0x170970u: goto label_170970;
        case 0x1709acu: goto label_1709ac;
        case 0x1709d0u: goto label_1709d0;
        default: break;
    }

    ctx->pc = 0x170908u;

    // 0x170908: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x170908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17090c: 0x2848003f  slti        $t0, $v0, 0x3F
    ctx->pc = 0x17090cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x170910: 0x1500ffca  bnez        $t0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x170910u;
    {
        const bool branch_taken_0x170910 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x170910) {
            ctx->pc = 0x17083Cu;
            return;
        }
    }
    ctx->pc = 0x170918u;
    // 0x170918: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x170918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x17091c: 0x8fb50188  lw          $s5, 0x188($sp)
    ctx->pc = 0x17091cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170920: 0xa2a20013  sb          $v0, 0x13($s5)
    ctx->pc = 0x170920u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x170924: 0x8fa80188  lw          $t0, 0x188($sp)
    ctx->pc = 0x170924u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170928: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x170928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17092c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x17092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170930: 0x90750013  lbu         $s5, 0x13($v1)
    ctx->pc = 0x170930u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x170934: 0x32b700ff  andi        $s7, $s5, 0xFF
    ctx->pc = 0x170934u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x170938: 0x171840  sll         $v1, $s7, 1
    ctx->pc = 0x170938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x17093c: 0x77a021  addu        $s4, $v1, $s7
    ctx->pc = 0x17093cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x170940: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x170940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x170944: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x170944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x170948: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x170948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x17094c: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x17094cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x170950: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x170950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
    // 0x170954: 0x34503333  ori         $s0, $v0, 0x3333
    ctx->pc = 0x170954u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x170958: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x170958u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17095c: 0x25040020  addiu       $a0, $t0, 0x20
    ctx->pc = 0x17095cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x170960: 0x24e50020  addiu       $a1, $a3, 0x20
    ctx->pc = 0x170960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x170964: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x170964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x170968: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x170968u;
    SET_GPR_U32(ctx, 31, 0x170970u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x170970u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x170970u) { return; }
    ctx->pc = 0x170970u;
label_170970:
    // 0x170970: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x170970u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170974: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x170974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x170978: 0x8c350140  lw          $s5, 0x140($at)
    ctx->pc = 0x170978u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x5D0140u));
    // 0x17097c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x17097cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x170980: 0x8fb70188  lw          $s7, 0x188($sp)
    ctx->pc = 0x170980u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170984: 0x2e3a821  addu        $s5, $s7, $v1
    ctx->pc = 0x170984u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x170988: 0x8eb70064  lw          $s7, 0x64($s5)
    ctx->pc = 0x170988u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x17098c: 0xafb70154  sw          $s7, 0x154($sp)
    ctx->pc = 0x17098cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 23));
    // 0x170990: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x170990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x170994: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x170994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x170998: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x170998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x17099c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x17099cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1709a0: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1709a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1709a4: 0xc040dac  jal         func_1036B0
    ctx->pc = 0x1709A4u;
    SET_GPR_U32(ctx, 31, 0x1709ACu);
    ctx->pc = 0x1036B0u;
    {
        ctx->pc = 0x1709ACu;
        ps2_stubs::sceVu0NormalLightMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1709ACu) { return; }
    ctx->pc = 0x1709ACu;
label_1709ac:
    // 0x1709ac: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1709acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1709b0: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1709b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1709b4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1709b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1709b8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1709b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1709bc: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1709bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1709c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1709c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1709c4: 0x2448bd50  addiu       $t0, $v0, -0x42B0
    ctx->pc = 0x1709c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x1709c8: 0xc040ddc  jal         func_103770
    ctx->pc = 0x1709C8u;
    SET_GPR_U32(ctx, 31, 0x1709D0u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x1709D0u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1709D0u) { return; }
    ctx->pc = 0x1709D0u;
label_1709d0:
    // 0x1709d0: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1709d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1709d4: 0x8c750058  lw          $s5, 0x58($v1)
    ctx->pc = 0x1709d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1709d8: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x1709d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1709dc: 0x24770008  addiu       $s7, $v1, 0x8
    ctx->pc = 0x1709dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    ctx->pc = 0x1709e0u;
}
