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

// Function: Gdma_set_t_screen_sprite_tag0
// Address: 0x1d70e0 - 0x1d73c0
void Gdma_set_t_screen_sprite_tag0_0x1d70e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gdma_set_t_screen_sprite_tag0_0x1d70e0");
#endif

    ctx->pc = 0x1d70e0u;

    // 0x1d70e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d70e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d70e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d70e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d70e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d70ec: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x1d70ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x1d70f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d70f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D70F4u;
    {
        const bool branch_taken_0x1d70f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d70f4) {
            ctx->pc = 0x1D7108u;
            goto label_1d7108;
        }
    }
    ctx->pc = 0x1D70FCu;
    // 0x1d70fc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1d70fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d7100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7100u;
    {
        const bool branch_taken_0x1d7100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7100) {
            ctx->pc = 0x1D710Cu;
            goto label_1d710c;
        }
    }
    ctx->pc = 0x1D7108u;
label_1d7108:
    // 0x1d7108: 0x24100700  addiu       $s0, $zero, 0x700
    ctx->pc = 0x1d7108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
label_1d710c:
    // 0x1d710c: 0x3c02c18b  lui         $v0, 0xC18B
    ctx->pc = 0x1d710cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49547 << 16));
    // 0x1d7110: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d7110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d7114: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d7114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7118: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1d7118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d711c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d7120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7124: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7124u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7128: 0x3402e535  ori         $v0, $zero, 0xE535
    ctx->pc = 0x1d7128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58677);
    // 0x1d712c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d712cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7130: 0x3c0213ee  lui         $v0, 0x13EE
    ctx->pc = 0x1d7130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5102 << 16));
    // 0x1d7134: 0x34427eee  ori         $v0, $v0, 0x7EEE
    ctx->pc = 0x1d7134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32494);
    // 0x1d7138: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d7138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d713c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7140: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d7140u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7144: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7148: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d714c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d714cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d7150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7154: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7158: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7158u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d715c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1d715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d7160: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7164: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d7164u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7168: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d716c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7170: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d7170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d7174: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1d7174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1d7178: 0x34430098  ori         $v1, $v0, 0x98
    ctx->pc = 0x1d7178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)152);
    // 0x1d717c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7180: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7180u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7184: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1d7184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d7188: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d718c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d718cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7190: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7194: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7198: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d7198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d719c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d71a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d71a4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d71a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d71a8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d71a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d71ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d71acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d71b0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d71b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d71b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d71b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d71b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d71bc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d71bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d71c0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1d71c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1d71c4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d71c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d71c8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1d71c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1d71cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d71ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d71d0: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x1d71d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x1d71d4: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1d71d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d71d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d71dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d71dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d71e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1d71e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d71e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d71e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d71e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d71e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d71ec: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1d71ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1d71f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d71f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d71f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d71f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d71f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d71fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d71fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d7200: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d7200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7204: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d7204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d7208: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d720c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d720cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7214: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1d7214u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1d7218: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d721c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7220: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d7220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d7224: 0x24031001  addiu       $v1, $zero, 0x1001
    ctx->pc = 0x1d7224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x1d7228: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d722c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d722cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7230: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1d7230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d7234: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7238: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d7238u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d723c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7240: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7244: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d7244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d7248: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d7248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d724c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7250: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7250u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7254: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1d7254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d7258: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d725c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d725cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7260: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7264: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7268: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d7268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d726c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d7270: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d7270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7274: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d7274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d7278: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d7278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d727c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7280: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7280u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7284: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7288: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1d7288u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1d728c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7290: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7294: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d7294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d7298: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d729c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d729cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d72a0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d72a4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d72a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d72a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d72ac: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d72acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d72b0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d72b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d72b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d72b8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d72b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d72bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d72bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d72c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d72c4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d72c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d72c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d72cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d72d0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d72d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d72d4: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x1d72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1d72d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d72d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d72dc: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x1d72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1d72e0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d72e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d72e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d72e8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d72e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d72ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d72ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d72f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d72f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d72f4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1d72f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d72f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d72fc: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d72fcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7300: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7304: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7308: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d7308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d730c: 0x24020e08  addiu       $v0, $zero, 0xE08
    ctx->pc = 0x1d730cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3592));
    // 0x1d7310: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d7310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7314: 0x24022008  addiu       $v0, $zero, 0x2008
    ctx->pc = 0x1d7314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x1d7318: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d7318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d731c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7320: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7320u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7324: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7328: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1d7328u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1d732c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7330: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7334: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d7334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d7338: 0x34028700  ori         $v0, $zero, 0x8700
    ctx->pc = 0x1d7338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x1d733c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d733cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7340: 0x34029000  ori         $v0, $zero, 0x9000
    ctx->pc = 0x1d7340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1d7344: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d7344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d7348: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d734c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d734cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7350: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d7354: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d7354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d7358: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1d7358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d735c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d735cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7360: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d7360u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7364: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7368: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d736c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d736cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d7370: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1d7370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1d7374: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1d7374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d7378: 0x312c2  srl         $v0, $v1, 11
    ctx->pc = 0x1d7378u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1d737c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d737cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7380: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d7380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d7384: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1d7384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1d7388: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d7388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d738c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7390: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7390u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7394: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1d7394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d7398: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d7398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d739c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d739cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d73a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d73a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d73a8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d73a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d73ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d73acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d73b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d73b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d73b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d73b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d73b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D73B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D73B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D73C0u;
}
