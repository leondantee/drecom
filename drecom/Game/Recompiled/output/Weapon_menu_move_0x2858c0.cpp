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

// Function: Weapon_menu_move
// Address: 0x2858c0 - 0x2867bc
void Weapon_menu_move_0x2858c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_menu_move_0x2858c0");
#endif

    switch (ctx->pc) {
        case 0x285914u: goto label_285914;
        case 0x28593cu: goto label_28593c;
        case 0x285a50u: goto label_285a50;
        case 0x285a68u: goto label_285a68;
        case 0x285a98u: goto label_285a98;
        case 0x285b0cu: goto label_285b0c;
        case 0x285ba0u: goto label_285ba0;
        case 0x285bd4u: goto label_285bd4;
        case 0x285c64u: goto label_285c64;
        case 0x285c98u: goto label_285c98;
        case 0x285e34u: goto label_285e34;
        case 0x285f38u: goto label_285f38;
        case 0x285f54u: goto label_285f54;
        case 0x285fa4u: goto label_285fa4;
        case 0x285fc0u: goto label_285fc0;
        case 0x285fdcu: goto label_285fdc;
        case 0x286090u: goto label_286090;
        case 0x2861ecu: goto label_2861ec;
        case 0x28628cu: goto label_28628c;
        case 0x286368u: goto label_286368;
        case 0x286518u: goto label_286518;
        case 0x286638u: goto label_286638;
        case 0x286790u: goto label_286790;
        default: break;
    }

    ctx->pc = 0x2858c0u;

    // 0x2858c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2858c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2858c4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x2858c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x2858c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2858c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2858cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2858ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2858d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2858d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2858d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2858d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2858d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2858d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2858dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2858dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2858e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2858e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2858e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2858e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2858e8: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x2858e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
    // 0x2858ec: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2858ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2858f0: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x2858f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x2858f4: 0x2454cb10  addiu       $s4, $v0, -0x34F0
    ctx->pc = 0x2858f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953744));
    // 0x2858f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2858f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2858fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2858fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285900: 0x0  nop
    ctx->pc = 0x285900u;
    // NOP
    // 0x285904: 0xe6205e00  swc1        $f0, 0x5E00($s1)
    ctx->pc = 0x285904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24064), bits); }
    // 0x285908: 0xc62c5e00  lwc1        $f12, 0x5E00($s1)
    ctx->pc = 0x285908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28590c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x28590Cu;
    SET_GPR_U32(ctx, 31, 0x285914u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x28590Cu, 0x285914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285914u;
label_285914:
    // 0x285914: 0x24070808  addiu       $a3, $zero, 0x808
    ctx->pc = 0x285914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x285918: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x285918u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x28591c: 0x3c031c07  lui         $v1, 0x1C07
    ctx->pc = 0x28591cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7175 << 16));
    // 0x285920: 0x3469050a  ori         $t1, $v1, 0x50A
    ctx->pc = 0x285920u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1290);
    // 0x285924: 0x1282025  or          $a0, $t1, $t0
    ctx->pc = 0x285924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x285928: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x285928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x28592c: 0x24651670  addiu       $a1, $v1, 0x1670
    ctx->pc = 0x28592cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5744));
    // 0x285930: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x285930u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x285934: 0xc059b14  jal         func_166C50
    ctx->pc = 0x285934u;
    SET_GPR_U32(ctx, 31, 0x28593Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x285934u, 0x28593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28593Cu;
label_28593c:
    // 0x28593c: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x28593cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285940: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x285940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285944: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x285944u;
    {
        const bool branch_taken_0x285944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285944) {
            ctx->pc = 0x285970u;
            goto label_285970;
        }
    }
    ctx->pc = 0x28594Cu;
    // 0x28594c: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x28594cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285950: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285954: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285954u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285958: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x285958u;
    {
        const bool branch_taken_0x285958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285958) {
            ctx->pc = 0x285970u;
            goto label_285970;
        }
    }
    ctx->pc = 0x285960u;
    // 0x285960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285964: 0xa223663c  sb          $v1, 0x663C($s1)
    ctx->pc = 0x285964u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26172), (uint8_t)GPR_U32(ctx, 3));
    // 0x285968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285968u;
    {
        const bool branch_taken_0x285968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285968) {
            ctx->pc = 0x285974u;
            goto label_285974;
        }
    }
    ctx->pc = 0x285970u;
label_285970:
    // 0x285970: 0xa220663c  sb          $zero, 0x663C($s1)
    ctx->pc = 0x285970u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26172), (uint8_t)GPR_U32(ctx, 0));
label_285974:
    // 0x285974: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285978: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28597c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28597cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285980: 0x1085000c  beq         $a0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x285980u;
    {
        const bool branch_taken_0x285980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x285980) {
            ctx->pc = 0x2859B4u;
            goto label_2859b4;
        }
    }
    ctx->pc = 0x285988u;
    // 0x285988: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285988u;
    {
        const bool branch_taken_0x285988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x285988) {
            ctx->pc = 0x285998u;
            goto label_285998;
        }
    }
    ctx->pc = 0x285990u;
    // 0x285990: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x285990u;
    {
        const bool branch_taken_0x285990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285990) {
            ctx->pc = 0x2859C0u;
            goto label_2859c0;
        }
    }
    ctx->pc = 0x285998u;
label_285998:
    // 0x285998: 0x9226683f  lbu         $a2, 0x683F($s1)
    ctx->pc = 0x285998u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26687)));
    // 0x28599c: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x28599cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2859a0: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2859a0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2859a4: 0x7963c  dsll32      $s2, $a3, 24
    ctx->pc = 0x2859a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2859a8: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x2859a8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x2859ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2859ACu;
    {
        const bool branch_taken_0x2859ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2859ac) {
            ctx->pc = 0x2859C0u;
            goto label_2859c0;
        }
    }
    ctx->pc = 0x2859B4u;
label_2859b4:
    // 0x2859b4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2859b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2859b8: 0x9963c  dsll32      $s2, $t1, 24
    ctx->pc = 0x2859b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) << (32 + 24));
    // 0x2859bc: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x2859bcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_2859c0:
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
            goto label_285e8c;
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
            goto label_285b18;
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
            goto label_285b18;
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
            goto label_285aa4;
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
            goto label_285a80;
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
            goto label_285aa4;
        }
    }
    ctx->pc = 0x285A80u;
label_285a80:
    // 0x285a80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285a84: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x285a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x285a88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285a88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285a8c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285a8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285a90: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x285A90u;
    SET_GPR_U32(ctx, 31, 0x285A98u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x285A90u, 0x285A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A98u;
label_285a98:
    // 0x285a98: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285a9c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x285a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x285aa0: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
label_285aa4:
    // 0x285aa4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285aa8: 0x8c240124  lw          $a0, 0x124($at)
    ctx->pc = 0x285aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0124u));
    // 0x285aac: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x285aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x285ab0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285ab4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x285AB4u;
    {
        const bool branch_taken_0x285ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ab4) {
            ctx->pc = 0x285B18u;
            goto label_285b18;
        }
    }
    ctx->pc = 0x285ABCu;
    // 0x285abc: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285abcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285ac0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285ac4: 0xa2235dea  sb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24042), (uint8_t)GPR_U32(ctx, 3));
    // 0x285ac8: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285ac8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285acc: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x285accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285ad0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x285ad0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x285ad4: 0x121e3c  dsll32      $v1, $s2, 24
    ctx->pc = 0x285ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
    // 0x285ad8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285ad8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285adc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x285adcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x285ae0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x285AE0u;
    {
        const bool branch_taken_0x285ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ae0) {
            ctx->pc = 0x285AF4u;
            goto label_285af4;
        }
    }
    ctx->pc = 0x285AE8u;
    // 0x285ae8: 0xa2325dea  sb          $s2, 0x5DEA($s1)
    ctx->pc = 0x285ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24042), (uint8_t)GPR_U32(ctx, 18));
    // 0x285aec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x285AECu;
    {
        const bool branch_taken_0x285aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285aec) {
            ctx->pc = 0x285B18u;
            goto label_285b18;
        }
    }
    ctx->pc = 0x285AF4u;
label_285af4:
    // 0x285af4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285af8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x285af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x285afc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285afcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285b00: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285b00u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285b04: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x285B04u;
    SET_GPR_U32(ctx, 31, 0x285B0Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x285B04u, 0x285B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285B0Cu;
label_285b0c:
    // 0x285b0c: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285b10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x285b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x285b14: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
label_285b18:
    // 0x285b18: 0x8e245dc0  lw          $a0, 0x5DC0($s1)
    ctx->pc = 0x285b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24000)));
    // 0x285b1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x285b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285b20: 0x14830061  bne         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x285B20u;
    {
        const bool branch_taken_0x285b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285b20) {
            ctx->pc = 0x285CA8u;
            goto label_285ca8;
        }
    }
    ctx->pc = 0x285B28u;
    // 0x285b28: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285b2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x285b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285b30: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x285B30u;
    {
        const bool branch_taken_0x285b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b30) {
            ctx->pc = 0x285BE4u;
            goto label_285be4;
        }
    }
    ctx->pc = 0x285B38u;
    // 0x285b38: 0x9223660c  lbu         $v1, 0x660C($s1)
    ctx->pc = 0x285b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26124)));
    // 0x285b3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x285b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285b40: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x285B40u;
    {
        const bool branch_taken_0x285b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b40) {
            ctx->pc = 0x285BE4u;
            goto label_285be4;
        }
    }
    ctx->pc = 0x285B48u;
    // 0x285b48: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285b48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285b4c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285b50: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285b50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285b54: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x285B54u;
    {
        const bool branch_taken_0x285b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b54) {
            ctx->pc = 0x285BE4u;
            goto label_285be4;
        }
    }
    ctx->pc = 0x285B5Cu;
    // 0x285b5c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285b60: 0x8c240128  lw          $a0, 0x128($at)
    ctx->pc = 0x285b60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0128u));
    // 0x285b64: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x285b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x285b68: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x285b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x285b6c: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x285B6Cu;
    {
        const bool branch_taken_0x285b6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x285b6c) {
            ctx->pc = 0x285B8Cu;
            goto label_285b8c;
        }
    }
    ctx->pc = 0x285B74u;
    // 0x285b74: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285b78: 0x8c27011c  lw          $a3, 0x11C($at)
    ctx->pc = 0x285b78u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x285b7c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x285b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x285b80: 0xe84824  and         $t1, $a3, $t0
    ctx->pc = 0x285b80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x285b84: 0x11200017  beqz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x285B84u;
    {
        const bool branch_taken_0x285b84 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x285b84) {
            ctx->pc = 0x285BE4u;
            goto label_285be4;
        }
    }
    ctx->pc = 0x285B8Cu;
label_285b8c:
    // 0x285b8c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x285b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285b90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285b90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285b94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285b94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285b98: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285B98u;
    SET_GPR_U32(ctx, 31, 0x285BA0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285B98u, 0x285BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BA0u;
label_285ba0:
    // 0x285ba0: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285ba4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x285ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x285ba8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x285ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x285bac: 0xae22685c  sw          $v0, 0x685C($s1)
    ctx->pc = 0x285bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 2));
    // 0x285bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285bb4: 0xa222660c  sb          $v0, 0x660C($s1)
    ctx->pc = 0x285bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26124), (uint8_t)GPR_U32(ctx, 2));
    // 0x285bb8: 0xa220660d  sb          $zero, 0x660D($s1)
    ctx->pc = 0x285bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26125), (uint8_t)GPR_U32(ctx, 0));
    // 0x285bbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285bc0: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x285bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x285bc4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285bc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285bc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285bc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285bcc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x285BCCu;
    SET_GPR_U32(ctx, 31, 0x285BD4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x285BCCu, 0x285BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285BD4u;
label_285bd4:
    // 0x285bd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x285bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x285bd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285bdc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285be0: 0xe4206178  swc1        $f0, 0x6178($at)
    ctx->pc = 0x285be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x396178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x396178u, _value); } while (0); }
label_285be4:
    // 0x285be4: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285be8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285bf0: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x285BF0u;
    {
        const bool branch_taken_0x285bf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285bf0) {
            ctx->pc = 0x285CA8u;
            goto label_285ca8;
        }
    }
    ctx->pc = 0x285BF8u;
    // 0x285bf8: 0x9223660d  lbu         $v1, 0x660D($s1)
    ctx->pc = 0x285bf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26125)));
    // 0x285bfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x285bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285c00: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x285C00u;
    {
        const bool branch_taken_0x285c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285c00) {
            ctx->pc = 0x285CA8u;
            goto label_285ca8;
        }
    }
    ctx->pc = 0x285C08u;
    // 0x285c08: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285c08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285c0c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285c10: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285c10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285c14: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x285C14u;
    {
        const bool branch_taken_0x285c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285c14) {
            ctx->pc = 0x285CA8u;
            goto label_285ca8;
        }
    }
    ctx->pc = 0x285C1Cu;
    // 0x285c1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285c20: 0x8c230128  lw          $v1, 0x128($at)
    ctx->pc = 0x285c20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0128u));
    // 0x285c24: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x285c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x285c28: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x285c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x285c2c: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x285C2Cu;
    {
        const bool branch_taken_0x285c2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x285c2c) {
            ctx->pc = 0x285C4Cu;
            goto label_285c4c;
        }
    }
    ctx->pc = 0x285C34u;
    // 0x285c34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285c38: 0x8c26011c  lw          $a2, 0x11C($at)
    ctx->pc = 0x285c38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x285c3c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x285c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x285c40: 0xc74024  and         $t0, $a2, $a3
    ctx->pc = 0x285c40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x285c44: 0x11000018  beqz        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x285C44u;
    {
        const bool branch_taken_0x285c44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x285c44) {
            ctx->pc = 0x285CA8u;
            goto label_285ca8;
        }
    }
    ctx->pc = 0x285C4Cu;
label_285c4c:
    // 0x285c4c: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x285c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285c50: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x285c50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x285c54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285c54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285c58: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285c58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285c5c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285C5Cu;
    SET_GPR_U32(ctx, 31, 0x285C64u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285C5Cu, 0x285C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C64u;
label_285c64:
    // 0x285c64: 0x8e30685c  lw          $s0, 0x685C($s1)
    ctx->pc = 0x285c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285c68: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x285c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x285c6c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x285c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x285c70: 0xae22685c  sw          $v0, 0x685C($s1)
    ctx->pc = 0x285c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 2));
    // 0x285c74: 0xa220660c  sb          $zero, 0x660C($s1)
    ctx->pc = 0x285c74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26124), (uint8_t)GPR_U32(ctx, 0));
    // 0x285c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285c7c: 0xa222660d  sb          $v0, 0x660D($s1)
    ctx->pc = 0x285c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26125), (uint8_t)GPR_U32(ctx, 2));
    // 0x285c80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x285c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285c84: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x285c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x285c88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285c8c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285c8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285c90: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x285C90u;
    SET_GPR_U32(ctx, 31, 0x285C98u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x285C90u, 0x285C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C98u;
label_285c98:
    // 0x285c98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x285c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x285c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285ca0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285ca4: 0xe4206178  swc1        $f0, 0x6178($at)
    ctx->pc = 0x285ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x396178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x396178u, _value); } while (0); }
label_285ca8:
    // 0x285ca8: 0x9223660c  lbu         $v1, 0x660C($s1)
    ctx->pc = 0x285ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26124)));
    // 0x285cac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285cb4: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x285CB4u;
    {
        const bool branch_taken_0x285cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285cb4) {
            ctx->pc = 0x285D64u;
            goto label_285d64;
        }
    }
    ctx->pc = 0x285CBCu;
    // 0x285cbc: 0xc6216620  lwc1        $f1, 0x6620($s1)
    ctx->pc = 0x285cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285cc0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285cc4: 0xc4206178  lwc1        $f0, 0x6178($at)
    ctx->pc = 0x285cc4u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285cc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x285cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x285ccc: 0xe6206620  swc1        $f0, 0x6620($s1)
    ctx->pc = 0x285cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26144), bits); }
    // 0x285cd0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285cd4: 0xc4226178  lwc1        $f2, 0x6178($at)
    ctx->pc = 0x285cd4u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285cd8: 0x3c033f8c  lui         $v1, 0x3F8C
    ctx->pc = 0x285cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16268 << 16));
    // 0x285cdc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x285cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x285ce0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x285ce0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285ce4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285ce8: 0xc4206180  lwc1        $f0, 0x6180($at)
    ctx->pc = 0x285ce8u;
    { uint32_t bits = FAST_READ32(0x396180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285cec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x285cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x285cf0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x285cf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285cf4: 0x0  nop
    ctx->pc = 0x285cf4u;
    // NOP
    // 0x285cf8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x285CF8u;
    {
        const bool branch_taken_0x285cf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285cf8) {
            ctx->pc = 0x285D1Cu;
            goto label_285d1c;
        }
    }
    ctx->pc = 0x285D00u;
    // 0x285d00: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285d04: 0xc4216178  lwc1        $f1, 0x6178($at)
    ctx->pc = 0x285d04u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285d08: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285d0c: 0xc4206180  lwc1        $f0, 0x6180($at)
    ctx->pc = 0x285d0cu;
    { uint32_t bits = FAST_READ32(0x396180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x285d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x285d14: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285d18: 0xe4206178  swc1        $f0, 0x6178($at)
    ctx->pc = 0x285d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x396178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x396178u, _value); } while (0); }
label_285d1c:
    // 0x285d1c: 0xc6216620  lwc1        $f1, 0x6620($s1)
    ctx->pc = 0x285d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285d20: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x285d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x285d24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285d28: 0x0  nop
    ctx->pc = 0x285d28u;
    // NOP
    // 0x285d2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x285d2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285d30: 0x0  nop
    ctx->pc = 0x285d30u;
    // NOP
    // 0x285d34: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x285D34u;
    {
        const bool branch_taken_0x285d34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285d34) {
            ctx->pc = 0x285D64u;
            goto label_285d64;
        }
    }
    ctx->pc = 0x285D3Cu;
    // 0x285d3c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x285d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x285d40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285d44: 0x0  nop
    ctx->pc = 0x285d44u;
    // NOP
    // 0x285d48: 0xe6206620  swc1        $f0, 0x6620($s1)
    ctx->pc = 0x285d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26144), bits); }
    // 0x285d4c: 0xa220660c  sb          $zero, 0x660C($s1)
    ctx->pc = 0x285d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26124), (uint8_t)GPR_U32(ctx, 0));
    // 0x285d50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285d54: 0xa2236624  sb          $v1, 0x6624($s1)
    ctx->pc = 0x285d54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26148), (uint8_t)GPR_U32(ctx, 3));
    // 0x285d58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x285d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285d5c: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x285d5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285d60: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x285d60u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_285d64:
    // 0x285d64: 0x9223660d  lbu         $v1, 0x660D($s1)
    ctx->pc = 0x285d64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26125)));
    // 0x285d68: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285d70: 0x14830033  bne         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x285D70u;
    {
        const bool branch_taken_0x285d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285d70) {
            ctx->pc = 0x285E40u;
            goto label_285e40;
        }
    }
    ctx->pc = 0x285D78u;
    // 0x285d78: 0xc6216620  lwc1        $f1, 0x6620($s1)
    ctx->pc = 0x285d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285d7c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285d80: 0xc4206178  lwc1        $f0, 0x6178($at)
    ctx->pc = 0x285d80u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285d84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x285d84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x285d88: 0xe6206620  swc1        $f0, 0x6620($s1)
    ctx->pc = 0x285d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26144), bits); }
    // 0x285d8c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285d90: 0xc4226178  lwc1        $f2, 0x6178($at)
    ctx->pc = 0x285d90u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x285d94: 0x3c053f8c  lui         $a1, 0x3F8C
    ctx->pc = 0x285d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16268 << 16));
    // 0x285d98: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x285d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x285d9c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x285d9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285da0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285da4: 0xc4206180  lwc1        $f0, 0x6180($at)
    ctx->pc = 0x285da4u;
    { uint32_t bits = FAST_READ32(0x396180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285da8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x285da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x285dac: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x285dacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285db0: 0x0  nop
    ctx->pc = 0x285db0u;
    // NOP
    // 0x285db4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x285DB4u;
    {
        const bool branch_taken_0x285db4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285db4) {
            ctx->pc = 0x285DD8u;
            goto label_285dd8;
        }
    }
    ctx->pc = 0x285DBCu;
    // 0x285dbc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285dc0: 0xc4216178  lwc1        $f1, 0x6178($at)
    ctx->pc = 0x285dc0u;
    { uint32_t bits = FAST_READ32(0x396178u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285dc4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285dc8: 0xc4206180  lwc1        $f0, 0x6180($at)
    ctx->pc = 0x285dc8u;
    { uint32_t bits = FAST_READ32(0x396180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285dcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x285dccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x285dd0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x285dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x285dd4: 0xe4206178  swc1        $f0, 0x6178($at)
    ctx->pc = 0x285dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x396178u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x396178u, _value); } while (0); }
label_285dd8:
    // 0x285dd8: 0xc6216620  lwc1        $f1, 0x6620($s1)
    ctx->pc = 0x285dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285ddc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285de0: 0x0  nop
    ctx->pc = 0x285de0u;
    // NOP
    // 0x285de4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x285de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285de8: 0x0  nop
    ctx->pc = 0x285de8u;
    // NOP
    // 0x285dec: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x285DECu;
    {
        const bool branch_taken_0x285dec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285dec) {
            ctx->pc = 0x285E40u;
            goto label_285e40;
        }
    }
    ctx->pc = 0x285DF4u;
    // 0x285df4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285df8: 0x0  nop
    ctx->pc = 0x285df8u;
    // NOP
    // 0x285dfc: 0xe6206620  swc1        $f0, 0x6620($s1)
    ctx->pc = 0x285dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26144), bits); }
    // 0x285e00: 0xa220660d  sb          $zero, 0x660D($s1)
    ctx->pc = 0x285e00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26125), (uint8_t)GPR_U32(ctx, 0));
    // 0x285e04: 0xa2206624  sb          $zero, 0x6624($s1)
    ctx->pc = 0x285e04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26148), (uint8_t)GPR_U32(ctx, 0));
    // 0x285e08: 0x9226683f  lbu         $a2, 0x683F($s1)
    ctx->pc = 0x285e08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26687)));
    // 0x285e0c: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x285e0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x285e10: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x285e10u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x285e14: 0x7963c  dsll32      $s2, $a3, 24
    ctx->pc = 0x285e14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) << (32 + 24));
    // 0x285e18: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x285e18u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x285e1c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x285e1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285e20: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x285e20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x285e24: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x285e24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x285e28: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285e28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285e2c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285E2Cu;
    SET_GPR_U32(ctx, 31, 0x285E34u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285E2Cu, 0x285E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285E34u;
label_285e34:
    // 0x285e34: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285e38: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x285e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x285e3c: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
label_285e40:
    // 0x285e40: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285e40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285e44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285e4c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x285E4Cu;
    {
        const bool branch_taken_0x285e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x285e4c) {
            ctx->pc = 0x285E80u;
            goto label_285e80;
        }
    }
    ctx->pc = 0x285E54u;
    // 0x285e54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285E54u;
    {
        const bool branch_taken_0x285e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e54) {
            ctx->pc = 0x285E64u;
            goto label_285e64;
        }
    }
    ctx->pc = 0x285E5Cu;
    // 0x285e5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x285E5Cu;
    {
        const bool branch_taken_0x285e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e5c) {
            ctx->pc = 0x285E8Cu;
            goto label_285e8c;
        }
    }
    ctx->pc = 0x285E64u;
label_285e64:
    // 0x285e64: 0x9223683f  lbu         $v1, 0x683F($s1)
    ctx->pc = 0x285e64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26687)));
    // 0x285e68: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285e6c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285e6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285e70: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x285e70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285e74: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x285e74u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x285e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285E78u;
    {
        const bool branch_taken_0x285e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e78) {
            ctx->pc = 0x285E8Cu;
            goto label_285e8c;
        }
    }
    ctx->pc = 0x285E80u;
label_285e80:
    // 0x285e80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x285e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285e84: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x285e84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285e88: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x285e88u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_285e8c:
    // 0x285e8c: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285e90: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x285e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x285e94: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x285E94u;
    {
        const bool branch_taken_0x285e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e94) {
            ctx->pc = 0x285FECu;
            goto label_285fec;
        }
    }
    ctx->pc = 0x285E9Cu;
    // 0x285e9c: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285e9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285ea0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285ea4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285ea4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285ea8: 0x4600047  bltz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x285EA8u;
    {
        const bool branch_taken_0x285ea8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x285ea8) {
            ctx->pc = 0x285FC8u;
            goto label_285fc8;
        }
    }
    ctx->pc = 0x285EB0u;
    // 0x285eb0: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285eb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285eb4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285eb8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285eb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285ebc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x285ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x285ec0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x285ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x285ec4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x285ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x285ec8: 0x9063663e  lbu         $v1, 0x663E($v1)
    ctx->pc = 0x285ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26174)));
    // 0x285ecc: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x285eccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285ed0: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285ed0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285ed4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285ed8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285ed8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285edc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x285edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x285ee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x285ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x285ee4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x285ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x285ee8: 0x9063663f  lbu         $v1, 0x663F($v1)
    ctx->pc = 0x285ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26175)));
    // 0x285eec: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x285eecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285ef0: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x285ef0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285ef4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x285ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285ef8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x285ef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x285efc: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x285efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285f00: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285f00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285f04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x285f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285f08: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x285F08u;
    {
        const bool branch_taken_0x285f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285f08) {
            ctx->pc = 0x285F5Cu;
            goto label_285f5c;
        }
    }
    ctx->pc = 0x285F10u;
    // 0x285f10: 0x82225dea  lb          $v0, 0x5DEA($s1)
    ctx->pc = 0x285f10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285f14: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x285f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285f18: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x285f18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x285f1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x285F1Cu;
    {
        const bool branch_taken_0x285f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285f1c) {
            ctx->pc = 0x285F40u;
            goto label_285f40;
        }
    }
    ctx->pc = 0x285F24u;
    // 0x285f24: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x285f24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f28: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x285f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x285f2c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285f2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f30: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285F30u;
    SET_GPR_U32(ctx, 31, 0x285F38u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285F30u, 0x285F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F38u;
label_285f38:
    // 0x285f38: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x285F38u;
    {
        const bool branch_taken_0x285f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285f38) {
            ctx->pc = 0x285FDCu;
            goto label_285fdc;
        }
    }
    ctx->pc = 0x285F40u;
label_285f40:
    // 0x285f40: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x285f40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f44: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x285f44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x285f48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285f48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f4c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285F4Cu;
    SET_GPR_U32(ctx, 31, 0x285F54u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285F4Cu, 0x285F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F54u;
label_285f54:
    // 0x285f54: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x285F54u;
    {
        const bool branch_taken_0x285f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285f54) {
            ctx->pc = 0x285FDCu;
            goto label_285fdc;
        }
    }
    ctx->pc = 0x285F5Cu;
label_285f5c:
    // 0x285f5c: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x285f5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x285f60: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x285f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x285f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285f68: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x285F68u;
    {
        const bool branch_taken_0x285f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x285f68) {
            ctx->pc = 0x285FDCu;
            goto label_285fdc;
        }
    }
    ctx->pc = 0x285F70u;
    // 0x285f70: 0x82225dea  lb          $v0, 0x5DEA($s1)
    ctx->pc = 0x285f70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285f74: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x285f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285f78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x285f78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x285f7c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x285F7Cu;
    {
        const bool branch_taken_0x285f7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x285f7c) {
            ctx->pc = 0x285FACu;
            goto label_285fac;
        }
    }
    ctx->pc = 0x285F84u;
    // 0x285f84: 0x82225dea  lb          $v0, 0x5DEA($s1)
    ctx->pc = 0x285f84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x285f88: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x285f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x285f8c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x285f8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x285f90: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x285f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x285f94: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x285f94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285f98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285f9c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285F9Cu;
    SET_GPR_U32(ctx, 31, 0x285FA4u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285F9Cu, 0x285FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285FA4u;
label_285fa4:
    // 0x285fa4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x285FA4u;
    {
        const bool branch_taken_0x285fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285fa4) {
            ctx->pc = 0x285FDCu;
            goto label_285fdc;
        }
    }
    ctx->pc = 0x285FACu;
label_285fac:
    // 0x285fac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x285facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285fb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285fb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285fb4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285fb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285fb8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285FB8u;
    SET_GPR_U32(ctx, 31, 0x285FC0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285FB8u, 0x285FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285FC0u;
label_285fc0:
    // 0x285fc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x285FC0u;
    {
        const bool branch_taken_0x285fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285fc0) {
            ctx->pc = 0x285FDCu;
            goto label_285fdc;
        }
    }
    ctx->pc = 0x285FC8u;
label_285fc8:
    // 0x285fc8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x285fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x285fcc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x285fccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285fd0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x285fd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285fd4: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x285FD4u;
    SET_GPR_U32(ctx, 31, 0x285FDCu);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x285FD4u, 0x285FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285FDCu;
label_285fdc:
    // 0x285fdc: 0x8e24685c  lw          $a0, 0x685C($s1)
    ctx->pc = 0x285fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x285fe0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x285fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x285fe4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285fe8: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x285fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
label_285fec:
    // 0x285fec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285ff0: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x285ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x285ff4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x285ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x285ff8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285ffc: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x285FFCu;
    {
        const bool branch_taken_0x285ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ffc) {
            ctx->pc = 0x2860CCu;
            goto label_2860cc;
        }
    }
    ctx->pc = 0x286004u;
    // 0x286004: 0x9223660c  lbu         $v1, 0x660C($s1)
    ctx->pc = 0x286004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26124)));
    // 0x286008: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x286008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28600c: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x28600Cu;
    {
        const bool branch_taken_0x28600c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28600c) {
            ctx->pc = 0x2860CCu;
            goto label_2860cc;
        }
    }
    ctx->pc = 0x286014u;
    // 0x286014: 0x9223660d  lbu         $v1, 0x660D($s1)
    ctx->pc = 0x286014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26125)));
    // 0x286018: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x286018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28601c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x28601Cu;
    {
        const bool branch_taken_0x28601c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28601c) {
            ctx->pc = 0x2860CCu;
            goto label_2860cc;
        }
    }
    ctx->pc = 0x286024u;
    // 0x286024: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x286024u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x286028: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x286028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28602c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28602cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x286030: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x286030u;
    {
        const bool branch_taken_0x286030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286030) {
            ctx->pc = 0x2860CCu;
            goto label_2860cc;
        }
    }
    ctx->pc = 0x286038u;
    // 0x286038: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x286038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x28603c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28603cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x286040: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x286040u;
    {
        const bool branch_taken_0x286040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x286040) {
            ctx->pc = 0x286060u;
            goto label_286060;
        }
    }
    ctx->pc = 0x286048u;
    // 0x286048: 0x8e235dc8  lw          $v1, 0x5DC8($s1)
    ctx->pc = 0x286048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24008)));
    // 0x28604c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286050: 0xae235dc8  sw          $v1, 0x5DC8($s1)
    ctx->pc = 0x286050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 3));
    // 0x286054: 0xae205dcc  sw          $zero, 0x5DCC($s1)
    ctx->pc = 0x286054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 0));
    // 0x286058: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x286058u;
    {
        const bool branch_taken_0x286058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286058) {
            ctx->pc = 0x2860CCu;
            goto label_2860cc;
        }
    }
    ctx->pc = 0x286060u;
label_286060:
    // 0x286060: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x286060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x286064: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x286064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x286068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28606c: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x28606Cu;
    {
        const bool branch_taken_0x28606c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28606c) {
            ctx->pc = 0x2860CCu;
            goto label_2860cc;
        }
    }
    ctx->pc = 0x286074u;
    // 0x286074: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x286074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x286078: 0x8c23c294  lw          $v1, -0x3D6C($at)
    ctx->pc = 0x286078u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FC294u));
    // 0x28607c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28607Cu;
    {
        const bool branch_taken_0x28607c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28607c) {
            ctx->pc = 0x286090u;
            goto label_286090;
        }
    }
    ctx->pc = 0x286084u;
    // 0x286084: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x286084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x286088: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x286088u;
    SET_GPR_U32(ctx, 31, 0x286090u);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x286088u, 0x286090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286090u;
label_286090:
    // 0x286090: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x286090u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x286094: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x286094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x286098: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x286098u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x28609c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2860a0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2860A0u;
    {
        const bool branch_taken_0x2860a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2860a0) {
            ctx->pc = 0x2860C0u;
            goto label_2860c0;
        }
    }
    ctx->pc = 0x2860A8u;
    // 0x2860a8: 0x8e235dc8  lw          $v1, 0x5DC8($s1)
    ctx->pc = 0x2860a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24008)));
    // 0x2860ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2860acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2860b0: 0xae235dc8  sw          $v1, 0x5DC8($s1)
    ctx->pc = 0x2860b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 3));
    // 0x2860b4: 0xae205dcc  sw          $zero, 0x5DCC($s1)
    ctx->pc = 0x2860b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 0));
    // 0x2860b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2860B8u;
    {
        const bool branch_taken_0x2860b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2860b8) {
            ctx->pc = 0x2860CCu;
            goto label_2860cc;
        }
    }
    ctx->pc = 0x2860C0u;
label_2860c0:
    // 0x2860c0: 0x8e23685c  lw          $v1, 0x685C($s1)
    ctx->pc = 0x2860c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26716)));
    // 0x2860c4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2860c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2860c8: 0xae23685c  sw          $v1, 0x685C($s1)
    ctx->pc = 0x2860c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26716), GPR_U32(ctx, 3));
label_2860cc:
    // 0x2860cc: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x2860ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x2860d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2860d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2860d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2860d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2860d8: 0x108300a6  beq         $a0, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2860D8u;
    {
        const bool branch_taken_0x2860d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2860d8) {
            ctx->pc = 0x286374u;
            goto label_286374;
        }
    }
    ctx->pc = 0x2860E0u;
    // 0x2860e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2860E0u;
    {
        const bool branch_taken_0x2860e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2860e0) {
            ctx->pc = 0x2860F0u;
            goto label_2860f0;
        }
    }
    ctx->pc = 0x2860E8u;
    // 0x2860e8: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x2860E8u;
    {
        const bool branch_taken_0x2860e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2860e8) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x2860F0u;
label_2860f0:
    // 0x2860f0: 0x26305e08  addiu       $s0, $s1, 0x5E08
    ctx->pc = 0x2860f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24072));
    // 0x2860f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2860f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2860f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2860f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2860fc: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x2860fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x286100: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x286100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x286104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286108: 0x0  nop
    ctx->pc = 0x286108u;
    // NOP
    // 0x28610c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x28610cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x286110: 0x82225dea  lb          $v0, 0x5DEA($s1)
    ctx->pc = 0x286110u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x286114: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x286114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x286118: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x286118u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28611c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x286120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286124: 0x0  nop
    ctx->pc = 0x286124u;
    // NOP
    // 0x286128: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28612c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x286130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286134: 0x0  nop
    ctx->pc = 0x286134u;
    // NOP
    // 0x286138: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x286138u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28613c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x28613cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x286140: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286144: 0x0  nop
    ctx->pc = 0x286144u;
    // NOP
    // 0x286148: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x286148u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28614c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x28614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x286150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286154: 0x0  nop
    ctx->pc = 0x286154u;
    // NOP
    // 0x286158: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x286158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28615c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x28615cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x286160: 0x3c02434d  lui         $v0, 0x434D
    ctx->pc = 0x286160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17229 << 16));
    // 0x286164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286168: 0x0  nop
    ctx->pc = 0x286168u;
    // NOP
    // 0x28616c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28616cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286170: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x286170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x286174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286178: 0x0  nop
    ctx->pc = 0x286178u;
    // NOP
    // 0x28617c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x28617cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x286180: 0x3c0243ef  lui         $v0, 0x43EF
    ctx->pc = 0x286180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17391 << 16));
    // 0x286184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286188: 0x0  nop
    ctx->pc = 0x286188u;
    // NOP
    // 0x28618c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x28618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286190: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x286190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x286194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286198: 0x0  nop
    ctx->pc = 0x286198u;
    // NOP
    // 0x28619c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x28619cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x2861a0: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2861a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2861a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2861a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2861a8: 0x0  nop
    ctx->pc = 0x2861a8u;
    // NOP
    // 0x2861ac: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2861acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2861b0: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x2861b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x2861b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2861b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2861b8: 0x0  nop
    ctx->pc = 0x2861b8u;
    // NOP
    // 0x2861bc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2861bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2861c0: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x2861c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2861c4: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x2861c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2861c8: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2861c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2861cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2861ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2861d0: 0x26020044  addiu       $v0, $s0, 0x44
    ctx->pc = 0x2861d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x2861d4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2861d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2861d8: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x2861d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2861dc: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x2861dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x2861e0: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x2861e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x2861e4: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x2861E4u;
    SET_GPR_U32(ctx, 31, 0x2861ECu);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x2861E4u, 0x2861ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2861ECu;
label_2861ec:
    // 0x2861ec: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2861ecu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2861f0: 0x26246090  addiu       $a0, $s1, 0x6090
    ctx->pc = 0x2861f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24720));
    // 0x2861f4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2861f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2861f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2861f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2861fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2861fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x286200: 0x3c054380  lui         $a1, 0x4380
    ctx->pc = 0x286200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17280 << 16));
    // 0x286204: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x286204u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286208: 0x0  nop
    ctx->pc = 0x286208u;
    // NOP
    // 0x28620c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x28620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x286210: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x286210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x286214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286218: 0x0  nop
    ctx->pc = 0x286218u;
    // NOP
    // 0x28621c: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x28621cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x286220: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x286220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x286224: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286224u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286228: 0x0  nop
    ctx->pc = 0x286228u;
    // NOP
    // 0x28622c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28622cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286230: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x286230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x286234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286238: 0x0  nop
    ctx->pc = 0x286238u;
    // NOP
    // 0x28623c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x28623cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x286240: 0x3c0343a7  lui         $v1, 0x43A7
    ctx->pc = 0x286240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17319 << 16));
    // 0x286244: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x286244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x286248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28624c: 0x0  nop
    ctx->pc = 0x28624cu;
    // NOP
    // 0x286250: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286254: 0x3c03438d  lui         $v1, 0x438D
    ctx->pc = 0x286254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17293 << 16));
    // 0x286258: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x286258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x28625c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28625cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286260: 0x0  nop
    ctx->pc = 0x286260u;
    // NOP
    // 0x286264: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x286264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x286268: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28626c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x28626cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286270: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x286270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x286274: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x286274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x286278: 0x261200c4  addiu       $s2, $s0, 0xC4
    ctx->pc = 0x286278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x28627c: 0x72404628  paddub      $t0, $s2, $zero
    ctx->pc = 0x28627cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x286280: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x286280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x286284: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x286284u;
    SET_GPR_U32(ctx, 31, 0x28628Cu);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x286284u, 0x28628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28628Cu;
label_28628c:
    // 0x28628c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x28628cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286290: 0x26305f4c  addiu       $s0, $s1, 0x5F4C
    ctx->pc = 0x286290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24396));
    // 0x286294: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x286294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286298: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x286298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28629c: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x28629cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x2862a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2862a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862a4: 0x0  nop
    ctx->pc = 0x2862a4u;
    // NOP
    // 0x2862a8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2862a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2862ac: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x2862acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x2862b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2862b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862b4: 0x0  nop
    ctx->pc = 0x2862b4u;
    // NOP
    // 0x2862b8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2862b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2862bc: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x2862bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x2862c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2862c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862c4: 0x0  nop
    ctx->pc = 0x2862c4u;
    // NOP
    // 0x2862c8: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2862c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2862cc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2862ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2862d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2862d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862d4: 0x0  nop
    ctx->pc = 0x2862d4u;
    // NOP
    // 0x2862d8: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x2862d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x2862dc: 0x3c034299  lui         $v1, 0x4299
    ctx->pc = 0x2862dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17049 << 16));
    // 0x2862e0: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x2862e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2862e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2862e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862e8: 0x0  nop
    ctx->pc = 0x2862e8u;
    // NOP
    // 0x2862ec: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2862ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2862f0: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x2862f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x2862f4: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x2862f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2862f8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2862f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2862fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2862fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x286300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286304: 0x0  nop
    ctx->pc = 0x286304u;
    // NOP
    // 0x286308: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28630c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x286310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286314: 0x0  nop
    ctx->pc = 0x286314u;
    // NOP
    // 0x286318: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x286318u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28631c: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x28631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x286320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286324: 0x0  nop
    ctx->pc = 0x286324u;
    // NOP
    // 0x286328: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x286328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28632c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x28632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x286330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286334: 0x0  nop
    ctx->pc = 0x286334u;
    // NOP
    // 0x286338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x286338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28633c: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x28633cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x286340: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286344: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x286344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286348: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x286348u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28634c: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x28634cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x286350: 0x26020084  addiu       $v0, $s0, 0x84
    ctx->pc = 0x286350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x286354: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x286354u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286358: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x286358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x28635c: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x28635cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x286360: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x286360u;
    SET_GPR_U32(ctx, 31, 0x286368u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x286360u, 0x286368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286368u;
label_286368:
    // 0x286368: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x286368u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28636c: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x28636Cu;
    {
        const bool branch_taken_0x28636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28636c) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x286374u;
label_286374:
    // 0x286374: 0x26245e08  addiu       $a0, $s1, 0x5E08
    ctx->pc = 0x286374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24072));
    // 0x286378: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x286378u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x28637c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x286380: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x286380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x286384: 0x3c034299  lui         $v1, 0x4299
    ctx->pc = 0x286384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17049 << 16));
    // 0x286388: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x286388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x28638c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28638cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286390: 0x0  nop
    ctx->pc = 0x286390u;
    // NOP
    // 0x286394: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x286394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x286398: 0x82245dea  lb          $a0, 0x5DEA($s1)
    ctx->pc = 0x286398u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x28639c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x28639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2863a0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2863a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2863a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2863a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2863a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2863a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863ac: 0x0  nop
    ctx->pc = 0x2863acu;
    // NOP
    // 0x2863b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2863b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2863b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2863b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2863b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2863b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863bc: 0x0  nop
    ctx->pc = 0x2863bcu;
    // NOP
    // 0x2863c0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2863c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2863c4: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2863c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2863c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2863c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863cc: 0x0  nop
    ctx->pc = 0x2863ccu;
    // NOP
    // 0x2863d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2863d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2863d4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2863d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2863d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2863d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863dc: 0x0  nop
    ctx->pc = 0x2863dcu;
    // NOP
    // 0x2863e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2863e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2863e4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2863e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2863e8: 0x3c04434d  lui         $a0, 0x434D
    ctx->pc = 0x2863e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17229 << 16));
    // 0x2863ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2863ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863f0: 0x0  nop
    ctx->pc = 0x2863f0u;
    // NOP
    // 0x2863f4: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2863f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2863f8: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2863f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2863fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2863fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286400: 0x0  nop
    ctx->pc = 0x286400u;
    // NOP
    // 0x286404: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x286404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x286408: 0x3c0443ef  lui         $a0, 0x43EF
    ctx->pc = 0x286408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17391 << 16));
    // 0x28640c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28640cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286410: 0x0  nop
    ctx->pc = 0x286410u;
    // NOP
    // 0x286414: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286418: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x286418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x28641c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28641cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286420: 0x0  nop
    ctx->pc = 0x286420u;
    // NOP
    // 0x286424: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x286424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x286428: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x286428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x28642c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28642cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286430: 0x0  nop
    ctx->pc = 0x286430u;
    // NOP
    // 0x286434: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x286434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x286438: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x286438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x28643c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28643cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286440: 0x0  nop
    ctx->pc = 0x286440u;
    // NOP
    // 0x286444: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x286444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x286448: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x286448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x28644c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28644cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286450: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x286450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286458: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x286458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x28645c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x28645cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x286460: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286464: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x286464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286468: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28646c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28646cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286470: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x286470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x286474: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286478: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x286478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28647c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28647cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286480: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286484: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x286484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x286488: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28648c: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x28648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286490: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286494: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x286494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x286498: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x286498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28649c: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x28649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2864a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2864a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2864a4: 0x0  nop
    ctx->pc = 0x2864a4u;
    // NOP
    // 0x2864a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2864a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2864ac: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2864acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2864b0: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2864b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2864b4: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2864b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2864b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2864b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2864bc: 0x0  nop
    ctx->pc = 0x2864bcu;
    // NOP
    // 0x2864c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2864c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2864c4: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2864c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2864c8: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x2864c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2864cc: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2864ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2864d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2864d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2864d4: 0x0  nop
    ctx->pc = 0x2864d4u;
    // NOP
    // 0x2864d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2864d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2864dc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2864dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2864e0: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x2864e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2864e4: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2864e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2864e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2864e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2864ec: 0x0  nop
    ctx->pc = 0x2864ecu;
    // NOP
    // 0x2864f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2864f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2864f4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2864f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2864f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2864f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2864fc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2864fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286500: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x286500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x286504: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x286504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x286508: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x286508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x28650c: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x28650cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x286510: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x286510u;
    SET_GPR_U32(ctx, 31, 0x286518u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x286510u, 0x286518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286518u;
label_286518:
    // 0x286518: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x286518u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28651c: 0x26226090  addiu       $v0, $s1, 0x6090
    ctx->pc = 0x28651cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24720));
    // 0x286520: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x286520u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286524: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x286524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286528: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x286528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28652c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x28652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x286530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286534: 0x0  nop
    ctx->pc = 0x286534u;
    // NOP
    // 0x286538: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x286538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x28653c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x28653cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x286540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286544: 0x0  nop
    ctx->pc = 0x286544u;
    // NOP
    // 0x286548: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x286548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x28654c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x28654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x286550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286554: 0x0  nop
    ctx->pc = 0x286554u;
    // NOP
    // 0x286558: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x286558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x28655c: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x28655cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x286560: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x286560u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286564: 0x0  nop
    ctx->pc = 0x286564u;
    // NOP
    // 0x286568: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x286568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x28656c: 0x3c0343a7  lui         $v1, 0x43A7
    ctx->pc = 0x28656cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17319 << 16));
    // 0x286570: 0x34623333  ori         $v0, $v1, 0x3333
    ctx->pc = 0x286570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x286574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286578: 0x0  nop
    ctx->pc = 0x286578u;
    // NOP
    // 0x28657c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x28657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286580: 0x3c04438d  lui         $a0, 0x438D
    ctx->pc = 0x286580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17293 << 16));
    // 0x286584: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x286584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x286588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28658c: 0x0  nop
    ctx->pc = 0x28658cu;
    // NOP
    // 0x286590: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x286590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x286594: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x286594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x286598: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28659c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x28659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2865a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2865a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2865a4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2865a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2865a8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2865a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2865ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2865acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2865b0: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2865b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2865b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2865b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2865b8: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2865b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2865bc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2865bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2865c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2865c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2865c4: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x2865c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2865c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2865c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2865cc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2865ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2865d0: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2865d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2865d4: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2865d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2865d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2865d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2865dc: 0x0  nop
    ctx->pc = 0x2865dcu;
    // NOP
    // 0x2865e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2865e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2865e4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2865e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2865e8: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2865e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2865ec: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2865ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2865f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2865f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2865f4: 0x0  nop
    ctx->pc = 0x2865f4u;
    // NOP
    // 0x2865f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2865f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2865fc: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2865fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286600: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x286600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286604: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x286604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x286608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28660c: 0x0  nop
    ctx->pc = 0x28660cu;
    // NOP
    // 0x286610: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x286610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286614: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286618: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28661c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x28661cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286620: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x286620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x286624: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x286624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x286628: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x286628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x28662c: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x28662cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x286630: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x286630u;
    SET_GPR_U32(ctx, 31, 0x286638u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x286630u, 0x286638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286638u;
label_286638:
    // 0x286638: 0x26305f4c  addiu       $s0, $s1, 0x5F4C
    ctx->pc = 0x286638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24396));
    // 0x28663c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286640: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x286640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x286644: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x286644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x286648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28664c: 0x0  nop
    ctx->pc = 0x28664cu;
    // NOP
    // 0x286650: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x286650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x286654: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x286654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x286658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28665c: 0x0  nop
    ctx->pc = 0x28665cu;
    // NOP
    // 0x286660: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x286660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x286664: 0x3c04435c  lui         $a0, 0x435C
    ctx->pc = 0x286664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17244 << 16));
    // 0x286668: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x286668u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28666c: 0x0  nop
    ctx->pc = 0x28666cu;
    // NOP
    // 0x286670: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x286670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286674: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x286674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x286678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28667c: 0x0  nop
    ctx->pc = 0x28667cu;
    // NOP
    // 0x286680: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x286680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x286684: 0x3c034299  lui         $v1, 0x4299
    ctx->pc = 0x286684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17049 << 16));
    // 0x286688: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x286688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x28668c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28668cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286690: 0x0  nop
    ctx->pc = 0x286690u;
    // NOP
    // 0x286694: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286698: 0x82245dea  lb          $a0, 0x5DEA($s1)
    ctx->pc = 0x286698u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x28669c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x28669cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2866a0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2866a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2866a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2866a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2866a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2866a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2866ac: 0x0  nop
    ctx->pc = 0x2866acu;
    // NOP
    // 0x2866b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2866b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2866b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2866b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2866b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2866b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2866bc: 0x0  nop
    ctx->pc = 0x2866bcu;
    // NOP
    // 0x2866c0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2866c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2866c4: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2866c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2866c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2866c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2866cc: 0x0  nop
    ctx->pc = 0x2866ccu;
    // NOP
    // 0x2866d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2866d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2866d4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2866d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2866d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2866d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2866dc: 0x0  nop
    ctx->pc = 0x2866dcu;
    // NOP
    // 0x2866e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2866e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2866e4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x2866e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x2866e8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2866e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2866ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2866ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2866f0: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2866f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2866f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2866f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2866f8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2866f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2866fc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2866fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x286700: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286704: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x286704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286708: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28670c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28670cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286710: 0x3c12bf80  lui         $s2, 0xBF80
    ctx->pc = 0x286710u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49024 << 16));
    // 0x286714: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x286714u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286718: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x286718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28671c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28671cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286720: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286724: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x286724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286728: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x286728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x28672c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28672cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286730: 0x0  nop
    ctx->pc = 0x286730u;
    // NOP
    // 0x286734: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x286734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286738: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x286738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x28673c: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x28673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286740: 0x3c044400  lui         $a0, 0x4400
    ctx->pc = 0x286740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17408 << 16));
    // 0x286744: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x286744u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286748: 0x0  nop
    ctx->pc = 0x286748u;
    // NOP
    // 0x28674c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28674cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286750: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x286750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286754: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x286754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286758: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x286758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x28675c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28675cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286760: 0x0  nop
    ctx->pc = 0x286760u;
    // NOP
    // 0x286764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x286764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286768: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x28676c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286770: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x286770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286774: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x286774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x286778: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x286778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x28677c: 0x261200c4  addiu       $s2, $s0, 0xC4
    ctx->pc = 0x28677cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x286780: 0x72404628  paddub      $t0, $s2, $zero
    ctx->pc = 0x286780u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x286784: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x286784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x286788: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x286788u;
    SET_GPR_U32(ctx, 31, 0x286790u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x286788u, 0x286790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286790u;
label_286790:
    // 0x286790: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x286790u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286794: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x286794u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286798: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x286798u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28679c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28679cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2867a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2867a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2867a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2867a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2867a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2867a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2867ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2867acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2867b0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2867b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2867b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2867B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2867B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2867BCu;
}
