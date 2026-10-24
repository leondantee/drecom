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

// Function: entry_002737e4
// Address: 0x2737e4 - 0x273868
void entry_002737e4_0x2737e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002737e4_0x2737e4");
#endif

    switch (ctx->pc) {
        case 0x273800u: goto label_273800;
        default: break;
    }

    ctx->pc = 0x2737e4u;

    // 0x2737e4: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x2737e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2737e8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2737e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2737ec: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x2737ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x2737f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2737f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2737f4: 0x8c641390  lw          $a0, 0x1390($v1)
    ctx->pc = 0x2737f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x2737f8: 0xc096558  jal         func_259560
    ctx->pc = 0x2737F8u;
    SET_GPR_U32(ctx, 31, 0x273800u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x2737F8u, 0x273800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273800u;
label_273800:
    // 0x273800: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x273800u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x273804: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x273804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x273808: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x273808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x27380c: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x27380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x273810: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x273810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x273814: 0x8c831390  lw          $v1, 0x1390($a0)
    ctx->pc = 0x273814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5008)));
    // 0x273818: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x273818u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x27381c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x273820: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x273820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x273824: 0x3c04462f  lui         $a0, 0x462F
    ctx->pc = 0x273824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17967 << 16));
    // 0x273828: 0x3483c800  ori         $v1, $a0, 0xC800
    ctx->pc = 0x273828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51200);
    // 0x27382c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27382cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273830: 0x0  nop
    ctx->pc = 0x273830u;
    // NOP
    // 0x273834: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x273834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x273838: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x273838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
    // 0x27383c: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x27383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x273840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273844: 0x0  nop
    ctx->pc = 0x273844u;
    // NOP
    // 0x273848: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x273848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x27384c: 0x3c03c5a4  lui         $v1, 0xC5A4
    ctx->pc = 0x27384cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50596 << 16));
    // 0x273850: 0x34640800  ori         $a0, $v1, 0x800
    ctx->pc = 0x273850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x273854: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x273854u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273858: 0x0  nop
    ctx->pc = 0x273858u;
    // NOP
    // 0x27385c: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x27385cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x273860: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x273860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x273864: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x273864u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x273868u;
}
