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

// Function: Wep01_move
// Address: 0x155060 - 0x155210
void Wep01_move_0x155060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Wep01_move_0x155060");
#endif

    ctx->pc = 0x155060u;

    // 0x155060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155064: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x155064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x155068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x155068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15506c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x15506cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x155070: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x155070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x155074: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x155074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x155078: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x155078u;
    {
        const bool branch_taken_0x155078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155078) {
            ctx->pc = 0x155204u;
            goto label_155204;
        }
    }
    ctx->pc = 0x155080u;
    // 0x155080: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155084: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x155084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155088: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x155088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15508c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15508cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x155090: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x155090u;
    {
        const bool branch_taken_0x155090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x155090) {
            ctx->pc = 0x1551BCu;
            goto label_1551bc;
        }
    }
    ctx->pc = 0x155098u;
    // 0x155098: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x155098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15509c: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x15509Cu;
    {
        const bool branch_taken_0x15509c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15509c) {
            ctx->pc = 0x155174u;
            goto label_155174;
        }
    }
    ctx->pc = 0x1550A4u;
    // 0x1550a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1550a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1550a8: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1550A8u;
    {
        const bool branch_taken_0x1550a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1550a8) {
            ctx->pc = 0x15510Cu;
            goto label_15510c;
        }
    }
    ctx->pc = 0x1550B0u;
    // 0x1550b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1550B0u;
    {
        const bool branch_taken_0x1550b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1550b0) {
            ctx->pc = 0x1550C0u;
            goto label_1550c0;
        }
    }
    ctx->pc = 0x1550B8u;
    // 0x1550b8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1550B8u;
    {
        const bool branch_taken_0x1550b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1550b8) {
            ctx->pc = 0x155204u;
            goto label_155204;
        }
    }
    ctx->pc = 0x1550C0u;
label_1550c0:
    // 0x1550c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1550c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1550c4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1550c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1550c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1550c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1550cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1550ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1550d0: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1550D0u;
    {
        const bool branch_taken_0x1550d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1550d0) {
            ctx->pc = 0x155204u;
            goto label_155204;
        }
    }
    ctx->pc = 0x1550D8u;
    // 0x1550d8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1550d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1550dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1550dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1550e0: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x1550e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x1550e4: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x1550e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x1550e8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1550e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1550ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1550ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1550f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1550f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1550f4: 0xa4641250  sh          $a0, 0x1250($v1)
    ctx->pc = 0x1550f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4688), (uint16_t)GPR_U32(ctx, 4));
    // 0x1550f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1550f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1550fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1550fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155100: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x155100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155104: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155108: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x155108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_15510c:
    // 0x15510c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x15510cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155110: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x155110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x155114: 0xc48101c0  lwc1        $f1, 0x1C0($a0)
    ctx->pc = 0x155114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155118: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x155118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x15511c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15511cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155120: 0x0  nop
    ctx->pc = 0x155120u;
    // NOP
    // 0x155124: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x155124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x155128: 0xe48001c0  swc1        $f0, 0x1C0($a0)
    ctx->pc = 0x155128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 448), bits); }
    // 0x15512c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x15512cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155130: 0x84831250  lh          $v1, 0x1250($a0)
    ctx->pc = 0x155130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4688)));
    // 0x155134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x155134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x155138: 0xa4831250  sh          $v1, 0x1250($a0)
    ctx->pc = 0x155138u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4688), (uint16_t)GPR_U32(ctx, 3));
    // 0x15513c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x15513cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155140: 0x84631250  lh          $v1, 0x1250($v1)
    ctx->pc = 0x155140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x155144: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x155144u;
    {
        const bool branch_taken_0x155144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x155144) {
            ctx->pc = 0x155204u;
            goto label_155204;
        }
    }
    ctx->pc = 0x15514Cu;
    // 0x15514c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15514cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155150: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155154: 0xa4641250  sh          $a0, 0x1250($v1)
    ctx->pc = 0x155154u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4688), (uint16_t)GPR_U32(ctx, 4));
    // 0x155158: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15515c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15515cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155160: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x155160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x155164: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155168: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x155168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15516c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x15516Cu;
    {
        const bool branch_taken_0x15516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15516c) {
            ctx->pc = 0x155204u;
            goto label_155204;
        }
    }
    ctx->pc = 0x155174u;
label_155174:
    // 0x155174: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x155174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155178: 0x84831250  lh          $v1, 0x1250($a0)
    ctx->pc = 0x155178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4688)));
    // 0x15517c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x155180: 0xa4831250  sh          $v1, 0x1250($a0)
    ctx->pc = 0x155180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4688), (uint16_t)GPR_U32(ctx, 3));
    // 0x155184: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155188: 0x84631250  lh          $v1, 0x1250($v1)
    ctx->pc = 0x155188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x15518c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x15518Cu;
    {
        const bool branch_taken_0x15518c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15518c) {
            ctx->pc = 0x155204u;
            goto label_155204;
        }
    }
    ctx->pc = 0x155194u;
    // 0x155194: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x155194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x155198: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15519c: 0xa4641250  sh          $a0, 0x1250($v1)
    ctx->pc = 0x15519cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4688), (uint16_t)GPR_U32(ctx, 4));
    // 0x1551a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1551a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1551a4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1551a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1551a8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1551a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1551ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1551acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1551b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1551b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1551b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1551B4u;
    {
        const bool branch_taken_0x1551b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1551b4) {
            ctx->pc = 0x155204u;
            goto label_155204;
        }
    }
    ctx->pc = 0x1551BCu;
label_1551bc:
    // 0x1551bc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1551bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1551c0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x1551c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1551c4: 0xc48101c0  lwc1        $f1, 0x1C0($a0)
    ctx->pc = 0x1551c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1551c8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1551c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1551cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1551ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1551d0: 0x0  nop
    ctx->pc = 0x1551d0u;
    // NOP
    // 0x1551d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1551d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1551d8: 0xe48001c0  swc1        $f0, 0x1C0($a0)
    ctx->pc = 0x1551d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 448), bits); }
    // 0x1551dc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1551dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1551e0: 0x84831250  lh          $v1, 0x1250($a0)
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4688)));
    // 0x1551e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1551e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1551e8: 0xa4831250  sh          $v1, 0x1250($a0)
    ctx->pc = 0x1551e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4688), (uint16_t)GPR_U32(ctx, 3));
    // 0x1551ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1551ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1551f0: 0x84631250  lh          $v1, 0x1250($v1)
    ctx->pc = 0x1551f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x1551f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1551F4u;
    {
        const bool branch_taken_0x1551f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1551f4) {
            ctx->pc = 0x155204u;
            goto label_155204;
        }
    }
    ctx->pc = 0x1551FCu;
    // 0x1551fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1551fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155200: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x155200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_155204:
    // 0x155204: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x155204u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x155208: 0x3e00008  jr          $ra
    ctx->pc = 0x155208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155210u;
}
