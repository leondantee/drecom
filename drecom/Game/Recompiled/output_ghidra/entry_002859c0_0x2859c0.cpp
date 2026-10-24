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

// Function: entry_002859c0
// Address: 0x2859c0 - 0x285a80
void entry_002859c0_0x2859c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002859c0_0x2859c0");
#endif

    switch (ctx->pc) {
        case 0x285a50u: goto label_285a50;
        case 0x285a68u: goto label_285a68;
        default: break;
    }

    ctx->pc = 0x2859c0u;

    // 0x2859c0: 0xae205dd0  sw          $zero, 0x5DD0($s1)
    ctx->pc = 0x2859c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 0));
    // 0x2859c4: 0x92306854  lbu         $s0, 0x6854($s1)
    ctx->pc = 0x2859c4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26708)));
    // 0x2859c8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2859c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2859cc: 0x1460012f  bnez        $v1, . + 4 + (0x12F << 2)
    ctx->pc = 0x2859CCu;
    {
        const bool branch_taken_0x2859cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2859cc) {
            ctx->pc = 0x285E8Cu;
            return;
        }
    }
    ctx->pc = 0x2859D4u;
    // 0x2859d4: 0x9223660c  lbu         $v1, 0x660C($s1)
    ctx->pc = 0x2859d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26124)));
    // 0x2859d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2859d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2859dc: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x2859DCu;
    {
        const bool branch_taken_0x2859dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2859dc) {
            ctx->pc = 0x285B18u;
            return;
        }
    }
    ctx->pc = 0x2859E4u;
    // 0x2859e4: 0x9223660d  lbu         $v1, 0x660D($s1)
    ctx->pc = 0x2859e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26125)));
    // 0x2859e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2859e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2859ec: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2859ECu;
    {
        const bool branch_taken_0x2859ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2859ec) {
            ctx->pc = 0x285B18u;
            return;
        }
    }
    ctx->pc = 0x2859F4u;
    // 0x2859f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2859f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2859f8: 0x8c240124  lw          $a0, 0x124($at)
    ctx->pc = 0x2859f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0124u));
    // 0x2859fc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2859fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x285a00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285a04: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x285A04u;
    {
        const bool branch_taken_0x285a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285a04) {
            ctx->pc = 0x285AA4u;
            return;
        }
    }
    ctx->pc = 0x285A0Cu;
    // 0x285a0c: 0x82225dea  lb          $v0, 0x5DEA($s1)
    ctx->pc = 0x285a0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285a10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x285a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x285a14: 0xa2225dea  sb          $v0, 0x5DEA($s1)
    ctx->pc = 0x285a14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24042), (uint8_t)GPR_U32(ctx, 2));
    // 0x285a18: 0x82225dea  lb          $v0, 0x5DEA($s1)
    ctx->pc = 0x285a18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285a1c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x285a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285a20: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x285a20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x285a24: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x285A24u;
    {
        const bool branch_taken_0x285a24 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x285a24) {
            ctx->pc = 0x285A80u;
            return;
        }
    }
    ctx->pc = 0x285A2Cu;
    // 0x285a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285a30: 0xae225dc0  sw          $v0, 0x5DC0($s1)
    ctx->pc = 0x285a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24000), GPR_U32(ctx, 2));
    // 0x285a34: 0xa2205dea  sb          $zero, 0x5DEA($s1)
    ctx->pc = 0x285a34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24042), (uint8_t)GPR_U32(ctx, 0));
    // 0x285a38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285a38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285a3c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x285a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x285a40: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285a40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285a44: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285a44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285a48: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x285A48u;
    SET_GPR_U32(ctx, 31, 0x285A50u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x285A48u, 0x285A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A50u;
label_285a50:
    // 0x285a50: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x285a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285a54: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x285a54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x285a58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285a58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285a5c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285a5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285a60: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285A60u;
    SET_GPR_U32(ctx, 31, 0x285A68u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285A60u, 0x285A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A68u;
label_285a68:
    // 0x285a68: 0x8e28685c  lw          $t0, 0x685C($s1)
    ctx->pc = 0x285a68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285a6c: 0x2409fffe  addiu       $t1, $zero, -0x2
    ctx->pc = 0x285a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x285a70: 0x1091824  and         $v1, $t0, $t1
    ctx->pc = 0x285a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x285a74: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
    // 0x285a78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x285A78u;
    {
        const bool branch_taken_0x285a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285a78) {
            ctx->pc = 0x285AA4u;
            return;
        }
    }
    ctx->pc = 0x285A80u;
}
