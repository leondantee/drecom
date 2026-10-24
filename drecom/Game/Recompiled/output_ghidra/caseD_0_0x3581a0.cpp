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

// Function: caseD_0
// Address: 0x3581a0 - 0x3582c0
void caseD_0_0x3581a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x3581a0");
#endif

    switch (ctx->pc) {
        case 0x358260u: goto label_358260;
        case 0x35826cu: goto label_35826c;
        default: break;
    }

    ctx->pc = 0x3581a0u;

    // 0x3581a0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3581a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3581a4: 0x244300a0  addiu       $v1, $v0, 0xA0
    ctx->pc = 0x3581a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x3581a8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x3581a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3581ac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3581acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3581b0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3581b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3581b4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3581b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3581b8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3581b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3581bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3581bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3581c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3581c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3581c4: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x3581c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3581c8: 0x34e41600  ori         $a0, $a3, 0x1600
    ctx->pc = 0x3581c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5632);
    // 0x3581cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3581ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3581d0: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x3581d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3581d4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3581d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3581d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3581d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3581dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3581dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3581e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3581e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3581e4: 0xa34024  and         $t0, $a1, $v1
    ctx->pc = 0x3581e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3581e8: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x3581e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3581ec: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3581ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3581f0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x3581f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3581f4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3581f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3581f8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3581f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3581fc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3581fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x358200: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x358200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x358204: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x358204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x358208: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x358208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x35820c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358210: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x358210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x358214: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x358214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x358218: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x358218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x35821c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x35821cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358220: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x358220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x358224: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x358224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x358228: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x358228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x35822c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x35822cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x358230: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358234: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x358234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x358238: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x358238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35823c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x35823cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x358240: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x358240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358244: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x358244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x358248: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x358248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35824c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x35824cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x358250: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x358250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x358254: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x358254u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x358258: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x358258u;
    SET_GPR_U32(ctx, 31, 0x358260u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x358258u, 0x358260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358260u;
label_358260:
    // 0x358260: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x358260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358264: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x358264u;
    SET_GPR_U32(ctx, 31, 0x35826Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x358264u, 0x35826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35826Cu;
label_35826c:
    // 0x35826c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x35826cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358270: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x358270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x358274: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x358274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x358278: 0x12040029  beq         $s0, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x358278u;
    {
        const bool branch_taken_0x358278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x358278) {
            ctx->pc = 0x358320u;
            return;
        }
    }
    ctx->pc = 0x358280u;
    // 0x358280: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358284: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x358284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358288: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x358288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x35828c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35828cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358290: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x358290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x358294: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x358294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x358298: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x358298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35829c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x35829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3582a0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3582a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3582a4: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3582A4u;
    {
        const bool branch_taken_0x3582a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3582a4) {
            ctx->pc = 0x3582C0u;
            return;
        }
    }
    ctx->pc = 0x3582ACu;
    // 0x3582ac: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x3582acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3582b0: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x3582b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3582b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3582b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3582b8: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3582B8u;
    {
        const bool branch_taken_0x3582b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3582b8) {
            ctx->pc = 0x3582C8u;
            return;
        }
    }
    ctx->pc = 0x3582C0u;
}
