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

// Function: entry_002ed8a8
// Address: 0x2ed8a8 - 0x2edac0
void entry_002ed8a8_0x2ed8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed8a8_0x2ed8a8");
#endif

    switch (ctx->pc) {
        case 0x2ed9acu: goto label_2ed9ac;
        case 0x2ed9dcu: goto label_2ed9dc;
        default: break;
    }

    ctx->pc = 0x2ed8a8u;

    // 0x2ed8a8: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x2ed8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2ed8ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed8b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2ed8b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2ed8b4: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x2ed8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x2ed8b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed8bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed8bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ed8c0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2ed8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ed8c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed8c8: 0x3c023c00  lui         $v0, 0x3C00
    ctx->pc = 0x2ed8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15360 << 16));
    // 0x2ed8cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed8d0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2ed8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2ed8d4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x2ed8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x2ed8d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ed8dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed8e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ed8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ed8e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed8e8: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x2ed8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed8ec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2ed8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2ed8f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed8f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed8f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed8fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed904: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed908: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x2ed908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed90c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ed90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed910: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed914: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed918: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed91c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed920: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed924: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed928: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ed928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2ed92c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2ed92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ed930: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed934: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed938: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed93c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed940: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed944: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed948: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x2ed948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed94c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ed94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ed950: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ed950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed954: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed958: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ed958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ed95c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed960: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ed960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ed964: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ed964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ed968: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2ed968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2ed96c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2ed96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ed970: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed974: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed978: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed978u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ed97c: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2ed97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x2ed980: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x2ed980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x2ed984: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ed984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed988: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2ed988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2ed98c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed990: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed994: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ed994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ed998: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2ed998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed99c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2ed99cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed9a0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2ed9a0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2ed9a4: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x2ED9A4u;
    SET_GPR_U32(ctx, 31, 0x2ED9ACu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x2ED9A4u, 0x2ED9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9ACu;
label_2ed9ac:
    // 0x2ed9ac: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2ed9acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ed9b0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ed9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ed9b4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ed9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ed9b8: 0x12030045  beq         $s0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2ED9B8u;
    {
        const bool branch_taken_0x2ed9b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed9b8) {
            ctx->pc = 0x2EDAD0u;
            return;
        }
    }
    ctx->pc = 0x2ED9C0u;
    // 0x2ed9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed9c4: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x2ed9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ed9c8: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x2ed9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2ed9cc: 0x26c50140  addiu       $a1, $s6, 0x140
    ctx->pc = 0x2ed9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 320));
    // 0x2ed9d0: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x2ed9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x2ed9d4: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x2ED9D4u;
    SET_GPR_U32(ctx, 31, 0x2ED9DCu);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x2ED9DCu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2ED9DCu) { return; }
    ctx->pc = 0x2ED9DCu;
label_2ed9dc:
    // 0x2ed9dc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ed9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ed9e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed9e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed9e4: 0x0  nop
    ctx->pc = 0x2ed9e4u;
    // NOP
    // 0x2ed9e8: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2ed9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2ed9ec: 0x3c0342d8  lui         $v1, 0x42D8
    ctx->pc = 0x2ed9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17112 << 16));
    // 0x2ed9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed9f4: 0x0  nop
    ctx->pc = 0x2ed9f4u;
    // NOP
    // 0x2ed9f8: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2ed9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2ed9fc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ed9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2eda00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eda00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eda04: 0x0  nop
    ctx->pc = 0x2eda04u;
    // NOP
    // 0x2eda08: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2eda08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2eda0c: 0x3c034268  lui         $v1, 0x4268
    ctx->pc = 0x2eda0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17000 << 16));
    // 0x2eda10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eda10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eda14: 0x0  nop
    ctx->pc = 0x2eda14u;
    // NOP
    // 0x2eda18: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2eda18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2eda1c: 0x3c033ff3  lui         $v1, 0x3FF3
    ctx->pc = 0x2eda1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16371 << 16));
    // 0x2eda20: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2eda20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2eda24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eda24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eda28: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2eda28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eda2c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2eda2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eda30: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2eda30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2eda34: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2eda34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2eda38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eda38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eda3c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2eda3cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eda40: 0x0  nop
    ctx->pc = 0x2eda40u;
    // NOP
    // 0x2eda44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eda44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eda48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eda48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eda4c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2eda4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2eda50: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x2eda50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x2eda54: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2eda54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eda58: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x2eda58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x2eda5c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2eda5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eda60: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x2eda60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x2eda64: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2eda64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eda68: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x2eda68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x2eda6c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2eda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2eda70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2eda70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eda74: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x2eda74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x2eda78: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2eda78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2eda7c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2eda7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eda80: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x2eda80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x2eda84: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2eda84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2eda88: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2eda88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eda8c: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x2eda8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x2eda90: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2eda90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2eda94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eda94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eda98: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2eda98u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eda9c: 0x0  nop
    ctx->pc = 0x2eda9cu;
    // NOP
    // 0x2edaa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2edaa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2edaa4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2edaa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2edaa8: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x2edaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x2edaac: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2edaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2edab0: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x2edab0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x2edab4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x2edab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2edab8: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x2edab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x2edabc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2edabcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x2edac0u;
}
