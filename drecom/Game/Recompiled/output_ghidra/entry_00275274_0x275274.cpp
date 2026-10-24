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

// Function: entry_00275274
// Address: 0x275274 - 0x2752f8
void entry_00275274_0x275274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275274_0x275274");
#endif

    switch (ctx->pc) {
        case 0x275290u: goto label_275290;
        default: break;
    }

    ctx->pc = 0x275274u;

    // 0x275274: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x275274u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x275278: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x275278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x27527c: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x27527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x275280: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275284: 0x8c641390  lw          $a0, 0x1390($v1)
    ctx->pc = 0x275284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x275288: 0xc096558  jal         func_259560
    ctx->pc = 0x275288u;
    SET_GPR_U32(ctx, 31, 0x275290u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x275288u, 0x275290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275290u;
label_275290:
    // 0x275290: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x275290u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x275294: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x275294u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x275298: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x275298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x27529c: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x27529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x2752a0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2752a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2752a4: 0x8c831390  lw          $v1, 0x1390($a0)
    ctx->pc = 0x2752a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5008)));
    // 0x2752a8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2752a8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2752ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2752acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2752b0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2752b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2752b4: 0x3c03462f  lui         $v1, 0x462F
    ctx->pc = 0x2752b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17967 << 16));
    // 0x2752b8: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x2752b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x2752bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2752bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2752c0: 0x0  nop
    ctx->pc = 0x2752c0u;
    // NOP
    // 0x2752c4: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x2752c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x2752c8: 0x3c044622  lui         $a0, 0x4622
    ctx->pc = 0x2752c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17954 << 16));
    // 0x2752cc: 0x34835000  ori         $v1, $a0, 0x5000
    ctx->pc = 0x2752ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x2752d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2752d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2752d4: 0x0  nop
    ctx->pc = 0x2752d4u;
    // NOP
    // 0x2752d8: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x2752d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x2752dc: 0x3c03c5a4  lui         $v1, 0xC5A4
    ctx->pc = 0x2752dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50596 << 16));
    // 0x2752e0: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x2752e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x2752e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2752e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2752e8: 0x0  nop
    ctx->pc = 0x2752e8u;
    // NOP
    // 0x2752ec: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2752ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2752f0: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x2752f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2752f4: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x2752f4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2752f8u;
}
