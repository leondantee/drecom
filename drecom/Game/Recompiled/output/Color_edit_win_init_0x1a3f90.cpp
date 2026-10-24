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

// Function: Color_edit_win_init
// Address: 0x1a3f90 - 0x1a41b8
void Color_edit_win_init_0x1a3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Color_edit_win_init_0x1a3f90");
#endif

    ctx->pc = 0x1a3f90u;

    // 0x1a3f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a3f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a3f94: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1a3f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1a3f98: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a3f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3f9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a3f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3fa0: 0xac640688  sw          $a0, 0x688($v1)
    ctx->pc = 0x1a3fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1672), GPR_U32(ctx, 4));
    // 0x1a3fa4: 0x3c034800  lui         $v1, 0x4800
    ctx->pc = 0x1a3fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18432 << 16));
    // 0x1a3fa8: 0x34642a02  ori         $a0, $v1, 0x2A02
    ctx->pc = 0x1a3fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10754);
    // 0x1a3fac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a3facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3fb0: 0xac64068c  sw          $a0, 0x68C($v1)
    ctx->pc = 0x1a3fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1676), GPR_U32(ctx, 4));
    // 0x1a3fb4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1a3fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a3fb8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3fbc: 0x24630690  addiu       $v1, $v1, 0x690
    ctx->pc = 0x1a3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1680));
    // 0x1a3fc0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3fc4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a3fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3fc8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3fcc: 0xac6406bc  sw          $a0, 0x6BC($v1)
    ctx->pc = 0x1a3fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1724), GPR_U32(ctx, 4));
    // 0x1a3fd0: 0x3c034800  lui         $v1, 0x4800
    ctx->pc = 0x1a3fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18432 << 16));
    // 0x1a3fd4: 0x34642a02  ori         $a0, $v1, 0x2A02
    ctx->pc = 0x1a3fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10754);
    // 0x1a3fd8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3fdc: 0xac6406c0  sw          $a0, 0x6C0($v1)
    ctx->pc = 0x1a3fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1728), GPR_U32(ctx, 4));
    // 0x1a3fe0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1a3fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a3fe4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a3fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3fe8: 0x246306c4  addiu       $v1, $v1, 0x6C4
    ctx->pc = 0x1a3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1732));
    // 0x1a3fec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3ff0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a3ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a3ff4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a3ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a3ff8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a3ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a3ffc: 0x3c035c00  lui         $v1, 0x5C00
    ctx->pc = 0x1a3ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23552 << 16));
    // 0x1a4000: 0x34641a06  ori         $a0, $v1, 0x1A06
    ctx->pc = 0x1a4000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6662);
    // 0x1a4004: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4008: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a4008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1a400c: 0x3c038110  lui         $v1, 0x8110
    ctx->pc = 0x1a400cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33040 << 16));
    // 0x1a4010: 0x34648580  ori         $a0, $v1, 0x8580
    ctx->pc = 0x1a4010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34176);
    // 0x1a4014: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4018: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x1a4018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1a401c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a401cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4020: 0x3404fffb  ori         $a0, $zero, 0xFFFB
    ctx->pc = 0x1a4020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x1a4024: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4028: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a4028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a402c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a402cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4030: 0x3c038250  lui         $v1, 0x8250
    ctx->pc = 0x1a4030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33360 << 16));
    // 0x1a4034: 0x34648800  ori         $a0, $v1, 0x8800
    ctx->pc = 0x1a4034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34816);
    // 0x1a4038: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a403c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1a403cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1a4040: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4044: 0x3404fffb  ori         $a0, $zero, 0xFFFB
    ctx->pc = 0x1a4044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x1a4048: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a404c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1a404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1a4050: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4054: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a4054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a4058: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a405c: 0xac64008c  sw          $a0, 0x8C($v1)
    ctx->pc = 0x1a405cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
    // 0x1a4060: 0x3c035c00  lui         $v1, 0x5C00
    ctx->pc = 0x1a4060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23552 << 16));
    // 0x1a4064: 0x34641a06  ori         $a0, $v1, 0x1A06
    ctx->pc = 0x1a4064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6662);
    // 0x1a4068: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a406c: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x1a406cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
    // 0x1a4070: 0x3c03ff60  lui         $v1, 0xFF60
    ctx->pc = 0x1a4070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65376 << 16));
    // 0x1a4074: 0x34646060  ori         $a0, $v1, 0x6060
    ctx->pc = 0x1a4074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24672);
    // 0x1a4078: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a407c: 0x24630094  addiu       $v1, $v1, 0x94
    ctx->pc = 0x1a407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
    // 0x1a4080: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4084: 0x3c0380d0  lui         $v1, 0x80D0
    ctx->pc = 0x1a4084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32976 << 16));
    // 0x1a4088: 0x34647c80  ori         $a0, $v1, 0x7C80
    ctx->pc = 0x1a4088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31872);
    // 0x1a408c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4090: 0x24630098  addiu       $v1, $v1, 0x98
    ctx->pc = 0x1a4090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x1a4094: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4098: 0x3404fffa  ori         $a0, $zero, 0xFFFA
    ctx->pc = 0x1a4098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x1a409c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a40a0: 0x2463009c  addiu       $v1, $v1, 0x9C
    ctx->pc = 0x1a40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x1a40a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a40a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a40a8: 0x3c038550  lui         $v1, 0x8550
    ctx->pc = 0x1a40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34128 << 16));
    // 0x1a40ac: 0x34648b00  ori         $a0, $v1, 0x8B00
    ctx->pc = 0x1a40acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35584);
    // 0x1a40b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a40b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a40b4: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x1a40b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x1a40b8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a40b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a40bc: 0x3404fffa  ori         $a0, $zero, 0xFFFA
    ctx->pc = 0x1a40bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x1a40c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a40c4: 0x246300a4  addiu       $v1, $v1, 0xA4
    ctx->pc = 0x1a40c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x1a40c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a40cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a40ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a40d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a40d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a40d4: 0xac6400a8  sw          $a0, 0xA8($v1)
    ctx->pc = 0x1a40d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 4));
    // 0x1a40d8: 0x3c034800  lui         $v1, 0x4800
    ctx->pc = 0x1a40d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18432 << 16));
    // 0x1a40dc: 0x34642a02  ori         $a0, $v1, 0x2A02
    ctx->pc = 0x1a40dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10754);
    // 0x1a40e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a40e4: 0xac6400ac  sw          $a0, 0xAC($v1)
    ctx->pc = 0x1a40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 4));
    // 0x1a40e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a40e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a40ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a40f0: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x1a40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x1a40f4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a40f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a40f8: 0x3c0380c0  lui         $v1, 0x80C0
    ctx->pc = 0x1a40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32960 << 16));
    // 0x1a40fc: 0x34647c70  ori         $a0, $v1, 0x7C70
    ctx->pc = 0x1a40fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31856);
    // 0x1a4100: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4104: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1a4104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1a4108: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a410c: 0x3404fffa  ori         $a0, $zero, 0xFFFA
    ctx->pc = 0x1a410cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x1a4110: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4114: 0x246300b8  addiu       $v1, $v1, 0xB8
    ctx->pc = 0x1a4114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x1a4118: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a411c: 0x3c0380c0  lui         $v1, 0x80C0
    ctx->pc = 0x1a411cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32960 << 16));
    // 0x1a4120: 0x34648b00  ori         $a0, $v1, 0x8B00
    ctx->pc = 0x1a4120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35584);
    // 0x1a4124: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4128: 0x246300bc  addiu       $v1, $v1, 0xBC
    ctx->pc = 0x1a4128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 188));
    // 0x1a412c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a412cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4130: 0x3404fffa  ori         $a0, $zero, 0xFFFA
    ctx->pc = 0x1a4130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x1a4134: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4138: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1a4138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1a413c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a413cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4140: 0x3c038550  lui         $v1, 0x8550
    ctx->pc = 0x1a4140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34128 << 16));
    // 0x1a4144: 0x34648b00  ori         $a0, $v1, 0x8B00
    ctx->pc = 0x1a4144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35584);
    // 0x1a4148: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a414c: 0x246300c4  addiu       $v1, $v1, 0xC4
    ctx->pc = 0x1a414cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
    // 0x1a4150: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4154: 0x3404fffa  ori         $a0, $zero, 0xFFFA
    ctx->pc = 0x1a4154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x1a4158: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a415c: 0x246300c8  addiu       $v1, $v1, 0xC8
    ctx->pc = 0x1a415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
    // 0x1a4160: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4164: 0x3c038550  lui         $v1, 0x8550
    ctx->pc = 0x1a4164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34128 << 16));
    // 0x1a4168: 0x34647c70  ori         $a0, $v1, 0x7C70
    ctx->pc = 0x1a4168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31856);
    // 0x1a416c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4170: 0x246300cc  addiu       $v1, $v1, 0xCC
    ctx->pc = 0x1a4170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 204));
    // 0x1a4174: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4178: 0x3404fffa  ori         $a0, $zero, 0xFFFA
    ctx->pc = 0x1a4178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x1a417c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4180: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1a4180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1a4184: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a4188: 0x3c0380c0  lui         $v1, 0x80C0
    ctx->pc = 0x1a4188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32960 << 16));
    // 0x1a418c: 0x34647c70  ori         $a0, $v1, 0x7C70
    ctx->pc = 0x1a418cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31856);
    // 0x1a4190: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4194: 0x246300d4  addiu       $v1, $v1, 0xD4
    ctx->pc = 0x1a4194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 212));
    // 0x1a4198: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a4198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a419c: 0x3404fffa  ori         $a0, $zero, 0xFFFA
    ctx->pc = 0x1a419cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x1a41a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a41a4: 0x246300d8  addiu       $v1, $v1, 0xD8
    ctx->pc = 0x1a41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
    // 0x1a41a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a41ac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a41acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a41b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A41B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A41B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A41B8u;
}
