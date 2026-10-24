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

// Function: entry_0020b728
// Address: 0x20b728 - 0x20b818
void entry_0020b728_0x20b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b728_0x20b728");
#endif

    switch (ctx->pc) {
        case 0x20b7f8u: goto label_20b7f8;
        default: break;
    }

    ctx->pc = 0x20b728u;

    // 0x20b728: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b72c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20b72cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x20b730: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20b730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20b734: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20b734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20b738: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x20b738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20b73c: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x20B73Cu;
    {
        const bool branch_taken_0x20b73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b73c) {
            ctx->pc = 0x20B914u;
            return;
        }
    }
    ctx->pc = 0x20B744u;
    // 0x20b744: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b748: 0x904309db  lbu         $v1, 0x9DB($v0)
    ctx->pc = 0x20b748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20b74c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x20b74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20b750: 0x30440080  andi        $a0, $v0, 0x80
    ctx->pc = 0x20b750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x20b754: 0x1080006f  beqz        $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x20B754u;
    {
        const bool branch_taken_0x20b754 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b754) {
            ctx->pc = 0x20B914u;
            return;
        }
    }
    ctx->pc = 0x20B75Cu;
    // 0x20b75c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b760: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x20b760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20b764: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x20B764u;
    {
        const bool branch_taken_0x20b764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b764) {
            ctx->pc = 0x20B818u;
            return;
        }
    }
    ctx->pc = 0x20B76Cu;
    // 0x20b76c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b770: 0xac401348  sw          $zero, 0x1348($v0)
    ctx->pc = 0x20b770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4936), GPR_U32(ctx, 0));
    // 0x20b774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b778: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b77c: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x20b77cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x20b780: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x20b780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20b784: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x20b784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b788: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x20b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x20b78c: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x20b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x20b790: 0x24060258  addiu       $a2, $zero, 0x258
    ctx->pc = 0x20b790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20b794: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b798: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b79c: 0xac4600f4  sw          $a2, 0xF4($v0)
    ctx->pc = 0x20b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 6));
    // 0x20b7a0: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x20b7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x20b7a4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b7a8: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x20b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b7ac: 0xaca400f8  sw          $a0, 0xF8($a1)
    ctx->pc = 0x20b7acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 4));
    // 0x20b7b0: 0x24020506  addiu       $v0, $zero, 0x506
    ctx->pc = 0x20b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x20b7b4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x20b7b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20b7b8: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x20b7b8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20b7bc: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b7c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20b7c4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20b7c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20b7c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b7cc: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x20b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20b7d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20b7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20b7d4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20b7d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20b7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b7dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20b7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20b7e0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x20b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20b7e4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x20b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20b7e8: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x20b7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20b7ec: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x20b7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20b7f0: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20B7F0u;
    SET_GPR_U32(ctx, 31, 0x20B7F8u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20B7F8u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20B7F8u) { return; }
    ctx->pc = 0x20B7F8u;
label_20b7f8:
    // 0x20b7f8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20b7fc: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x20b7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20b800: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20b800u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b804: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x20b804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x20b808: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x20b808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20b80c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20b80cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b810: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20B810u;
    SET_GPR_U32(ctx, 31, 0x20B818u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20B810u, 0x20B818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B818u;
}
