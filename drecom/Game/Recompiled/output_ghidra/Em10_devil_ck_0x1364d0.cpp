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

// Function: Em10_devil_ck
// Address: 0x1364d0 - 0x136650
void Em10_devil_ck_0x1364d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_devil_ck_0x1364d0");
#endif

    switch (ctx->pc) {
        case 0x1365b0u: goto label_1365b0;
        case 0x1365d8u: goto label_1365d8;
        default: break;
    }

    ctx->pc = 0x1364d0u;

    // 0x1364d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1364d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1364d4: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x1364d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x1364d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1364d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1364dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1364dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1364e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1364e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1364e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1364e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1364e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1364e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1364ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1364ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1364f0: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x1364f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x1364f4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1364f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1364f8: 0x2472bb48  addiu       $s2, $v1, -0x44B8
    ctx->pc = 0x1364f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949704));
    // 0x1364fc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1364fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x136500: 0x24741330  addiu       $s4, $v1, 0x1330
    ctx->pc = 0x136500u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x136504: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x136504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x136508: 0x2475dbc0  addiu       $s5, $v1, -0x2440
    ctx->pc = 0x136508u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x13650c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x13650cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x136510: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x136510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x136514: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x136514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x136518: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x136518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13651c: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x13651Cu;
    {
        const bool branch_taken_0x13651c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13651c) {
            ctx->pc = 0x136628u;
            goto label_136628;
        }
    }
    ctx->pc = 0x136524u;
    // 0x136524: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x136524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x136528: 0x8c23af60  lw          $v1, -0x50A0($at)
    ctx->pc = 0x136528u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF60u));
    // 0x13652c: 0x2c6301f4  sltiu       $v1, $v1, 0x1F4
    ctx->pc = 0x13652cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x136530: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x136530u;
    {
        const bool branch_taken_0x136530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136530) {
            ctx->pc = 0x136628u;
            goto label_136628;
        }
    }
    ctx->pc = 0x136538u;
    // 0x136538: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13653c: 0x0  nop
    ctx->pc = 0x13653cu;
    // NOP
    // 0x136540: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x136540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x136544: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x136544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x136548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13654c: 0x0  nop
    ctx->pc = 0x13654cu;
    // NOP
    // 0x136550: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x136550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x136554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136558: 0x0  nop
    ctx->pc = 0x136558u;
    // NOP
    // 0x13655c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x13655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x136560: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x136560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x136564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x136564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136568: 0x0  nop
    ctx->pc = 0x136568u;
    // NOP
    // 0x13656c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x13656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x136570: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x136570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x136574: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x136574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x136578: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x136578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13657c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13657cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x136580: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x136580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x136584: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x136584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x136588: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x136588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13658c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x136590: 0x34440412  ori         $a0, $v0, 0x412
    ctx->pc = 0x136590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1042);
    // 0x136594: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x136594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x136598: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x136598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13659c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13659cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1365a0: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x1365a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1365a4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1365a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1365a8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1365A8u;
    SET_GPR_U32(ctx, 31, 0x1365B0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1365A8u, 0x1365B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365B0u;
label_1365b0:
    // 0x1365b0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1365b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1365b4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1365b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1365b8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1365b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1365bc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1365bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1365c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1365c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1365c4: 0x24040308  addiu       $a0, $zero, 0x308
    ctx->pc = 0x1365c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
    // 0x1365c8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1365c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1365cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1365ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1365d0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1365D0u;
    SET_GPR_U32(ctx, 31, 0x1365D8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1365D0u, 0x1365D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1365D8u;
label_1365d8:
    // 0x1365d8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1365d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1365dc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1365dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1365e0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1365e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1365e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1365e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1365e8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1365e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1365ec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1365ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1365f0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1365f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1365f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1365f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1365f8: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x1365f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x1365fc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1365fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x136600: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x136600u;
    {
        const bool branch_taken_0x136600 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x136600) {
            ctx->pc = 0x13661Cu;
            goto label_13661c;
        }
    }
    ctx->pc = 0x136608u;
    // 0x136608: 0x24042328  addiu       $a0, $zero, 0x2328
    ctx->pc = 0x136608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9000));
    // 0x13660c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x13660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x136610: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x136610u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x136614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136614u;
    {
        const bool branch_taken_0x136614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136614) {
            ctx->pc = 0x136628u;
            goto label_136628;
        }
    }
    ctx->pc = 0x13661Cu;
label_13661c:
    // 0x13661c: 0x24040bb8  addiu       $a0, $zero, 0xBB8
    ctx->pc = 0x13661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x136620: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x136620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x136624: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x136624u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
label_136628:
    // 0x136628: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x136628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13662c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13662cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136630: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x136630u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x136634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13663c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13663cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136644: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x136644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x136648: 0x3e00008  jr          $ra
    ctx->pc = 0x136648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136650u;
}
