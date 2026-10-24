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

// Function: entry_001d73f8
// Address: 0x1d73f8 - 0x1d7698
void entry_001d73f8_0x1d73f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d73f8_0x1d73f8");
#endif

    ctx->pc = 0x1d73f8u;

    // 0x1d73f8: 0x3c02d1ab  lui         $v0, 0xD1AB
    ctx->pc = 0x1d73f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53675 << 16));
    // 0x1d73fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d73fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d7400: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d7400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7404: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x1d7404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1d7408: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d7408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d740c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7410: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7410u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7414: 0x3c02000e  lui         $v0, 0xE
    ctx->pc = 0x1d7414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14 << 16));
    // 0x1d7418: 0x34425351  ori         $v0, $v0, 0x5351
    ctx->pc = 0x1d7418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21329);
    // 0x1d741c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d741cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7420: 0x3c023ee7  lui         $v0, 0x3EE7
    ctx->pc = 0x1d7420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16103 << 16));
    // 0x1d7424: 0x3442eeee  ori         $v0, $v0, 0xEEEE
    ctx->pc = 0x1d7424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x1d7428: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d7428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d742c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7430: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d7430u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7434: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7438: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d743c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d743cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d7440: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1d7444: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1d7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d7448: 0x312c2  srl         $v0, $v1, 11
    ctx->pc = 0x1d7448u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1d744c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7450: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d7450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d7454: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1d7458: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d7458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d745c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7460: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7460u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7464: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1d7464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d7468: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d746c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d746cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7470: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7474: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7478: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d7478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d747c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7480: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7484: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7484u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7488: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d7488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d748c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7490: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d7490u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7494: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7498: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d749c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d749cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d74a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d74a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d74a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d74a8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d74a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d74ac: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1d74acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d74b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d74b4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d74b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d74b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d74bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d74c0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d74c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d74c4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1d74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d74c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d74c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d74cc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1d74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d74d0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d74d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d74d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d74d8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d74d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d74dc: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1d74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1d74e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d74e4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d74e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d74e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d74ec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d74f0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d74f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d74f4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1d74f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d74f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d74f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d74fc: 0x3402a802  ori         $v0, $zero, 0xA802
    ctx->pc = 0x1d74fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43010);
    // 0x1d7500: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1d7500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1d7504: 0x34421300  ori         $v0, $v0, 0x1300
    ctx->pc = 0x1d7504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4864);
    // 0x1d7508: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d7508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d750c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7510: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7510u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7514: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7518: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1d7518u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1d751c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d751cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7520: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7524: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d7524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d7528: 0x24033001  addiu       $v1, $zero, 0x3001
    ctx->pc = 0x1d7528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x1d752c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7530: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7530u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7534: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1d7534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d7538: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d753c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d753cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7540: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7544: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7548: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d7548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d754c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d7550: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7554: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7554u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7558: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1d7558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d755c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7560: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d7560u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7564: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7568: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d756c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d756cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d7570: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d7570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d7574: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d7574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7578: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d7578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d757c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d757cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d7580: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7584: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7584u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7588: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d758c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1d758cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1d7590: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7594: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7598: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d7598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d759c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d75a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d75a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d75a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d75a8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d75a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d75ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d75acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d75b0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d75b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d75b4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d75b8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d75b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d75bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d75c0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d75c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d75c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d75c8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d75c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d75cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d75d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d75d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d75d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d75d8: 0x240278f0  addiu       $v0, $zero, 0x78F0
    ctx->pc = 0x1d75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30960));
    // 0x1d75dc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d75dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d75e0: 0x24026ff0  addiu       $v0, $zero, 0x6FF0
    ctx->pc = 0x1d75e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28656));
    // 0x1d75e4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d75e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d75e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d75ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d75ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d75f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d75f4: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1d75f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1d75f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d75fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d75fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7600: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d7600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d7604: 0x24020e08  addiu       $v0, $zero, 0xE08
    ctx->pc = 0x1d7604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3592));
    // 0x1d7608: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d7608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d760c: 0x24022008  addiu       $v0, $zero, 0x2008
    ctx->pc = 0x1d760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x1d7610: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d7610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d7614: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7618: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7618u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d761c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7620: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1d7620u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1d7624: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7628: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d762c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d762cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d7630: 0x34028710  ori         $v0, $zero, 0x8710
    ctx->pc = 0x1d7630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34576);
    // 0x1d7634: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d7634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7638: 0x34029010  ori         $v0, $zero, 0x9010
    ctx->pc = 0x1d7638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36880);
    // 0x1d763c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1d763cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d7640: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7644: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7644u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7648: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d764c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1d764cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1d7650: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7654: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d7658: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d7658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d765c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7660: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7664: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1d7664u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1d7668: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1d7668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d766c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7670: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1d7670u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1d7674: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7678: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d7678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d767c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d767cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d7680: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d7680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d768c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d768cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d7690: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7698u;
}
