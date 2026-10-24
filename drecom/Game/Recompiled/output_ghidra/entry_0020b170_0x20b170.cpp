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

// Function: entry_0020b170
// Address: 0x20b170 - 0x20b264
void entry_0020b170_0x20b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b170_0x20b170");
#endif

    switch (ctx->pc) {
        case 0x20b1dcu: goto label_20b1dc;
        default: break;
    }

    ctx->pc = 0x20b170u;

    // 0x20b170: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x20b170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x20b174: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20b174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b178: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x20b178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x20b17c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20b17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20b180: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20b184: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b188: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20b188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x20b18c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b190: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x20b190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x20b194: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20b194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b198: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x20b198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x20b19c: 0x3c0543af  lui         $a1, 0x43AF
    ctx->pc = 0x20b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17327 << 16));
    // 0x20b1a0: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x20b1a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20b1a4: 0x324b00ff  andi        $t3, $s2, 0xFF
    ctx->pc = 0x20b1a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x20b1a8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b1ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20b1acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20b1b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20b1b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20b1b4: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x20b1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20b1b8: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x20b1b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20b1bc: 0x8faa0188  lw          $t2, 0x188($sp)
    ctx->pc = 0x20b1bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b1c0: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x20b1c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20b1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b1c8: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x20b1c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20b1cc: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x20b1ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x20b1d0: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x20b1d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x20b1d4: 0xc0bb7c0  jal         func_2EDF00
    ctx->pc = 0x20B1D4u;
    SET_GPR_U32(ctx, 31, 0x20B1DCu);
    ctx->pc = 0x2EDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF00u, 0x20B1D4u, 0x20B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1DCu;
label_20b1dc:
    // 0x20b1dc: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b1e0: 0x8c821374  lw          $v0, 0x1374($a0)
    ctx->pc = 0x20b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4980)));
    // 0x20b1e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20b1e8: 0xac821374  sw          $v0, 0x1374($a0)
    ctx->pc = 0x20b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4980), GPR_U32(ctx, 2));
    // 0x20b1ec: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x20b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b1f0: 0x84a2127e  lh          $v0, 0x127E($a1)
    ctx->pc = 0x20b1f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x20b1f4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x20b1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20b1f8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20b1f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20b1fc: 0x2881000b  slti        $at, $a0, 0xB
    ctx->pc = 0x20b1fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20b200: 0x14200149  bnez        $at, . + 4 + (0x149 << 2)
    ctx->pc = 0x20B200u;
    {
        const bool branch_taken_0x20b200 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b200) {
            ctx->pc = 0x20B728u;
            return;
        }
    }
    ctx->pc = 0x20B208u;
    // 0x20b208: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20b208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20b20c: 0x2445a270  addiu       $a1, $v0, -0x5D90
    ctx->pc = 0x20b20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943344));
    // 0x20b210: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20b210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x20b214: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x20b214u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A270u));
    // 0x20b218: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b218u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x20b21c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20b220: 0x2463a280  addiu       $v1, $v1, -0x5D80
    ctx->pc = 0x20b220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943360));
    // 0x20b224: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x20b224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x20b228: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x20b228u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x38A280u));
    // 0x20b22c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x20b22cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x20b230: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20b230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20b234: 0x2463a290  addiu       $v1, $v1, -0x5D70
    ctx->pc = 0x20b234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943376));
    // 0x20b238: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x20b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x20b23c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x20b23cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A290u));
    // 0x20b240: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x20b240u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x20b244: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b248: 0x8c641374  lw          $a0, 0x1374($v1)
    ctx->pc = 0x20b248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4980)));
    // 0x20b24c: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x20b24cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20b250: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B250u;
    {
        const bool branch_taken_0x20b250 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b250) {
            ctx->pc = 0x20B264u;
            return;
        }
    }
    ctx->pc = 0x20B258u;
    // 0x20b258: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20b258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b25c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B25Cu;
    {
        const bool branch_taken_0x20b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b25c) {
            ctx->pc = 0x20B268u;
            return;
        }
    }
    ctx->pc = 0x20B264u;
}
