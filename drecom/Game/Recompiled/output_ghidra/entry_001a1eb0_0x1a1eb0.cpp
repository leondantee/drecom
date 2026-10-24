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

// Function: entry_001a1eb0
// Address: 0x1a1eb0 - 0x1a2288
void entry_001a1eb0_0x1a1eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1eb0_0x1a1eb0");
#endif

    ctx->pc = 0x1a1eb0u;

    // 0x1a1eb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1eb4: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x1a1eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a1eb8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a1eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a1ebc: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1A1EBCu;
    {
        const bool branch_taken_0x1a1ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ebc) {
            ctx->pc = 0x1A1EA0u;
            return;
        }
    }
    ctx->pc = 0x1A1EC4u;
    // 0x1a1ec4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1ec8: 0x24700028  addiu       $s0, $v1, 0x28
    ctx->pc = 0x1a1ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x1a1ecc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a1eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1ed0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a1ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a1ed4: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x1a1ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x1a1ed8: 0x34632b16  ori         $v1, $v1, 0x2B16
    ctx->pc = 0x1a1ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x1a1edc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a1edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a1ee0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a1ee4: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1a1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1a1ee8: 0x34648080  ori         $a0, $v1, 0x8080
    ctx->pc = 0x1a1ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a1eec: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a1eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a1ef0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1ef4: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x1a1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a1ef8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a1ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a1efc: 0x3c031e00  lui         $v1, 0x1E00
    ctx->pc = 0x1a1efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7680 << 16));
    // 0x1a1f00: 0x34642800  ori         $a0, $v1, 0x2800
    ctx->pc = 0x1a1f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10240);
    // 0x1a1f04: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1a1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a1f08: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1f0c: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x1a1f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x1a1f10: 0x34647000  ori         $a0, $v1, 0x7000
    ctx->pc = 0x1a1f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x1a1f14: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x1a1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a1f18: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1f1c: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x1a1f1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a1f20: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x1a1f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a1f24: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1f28: 0x3c038800  lui         $v1, 0x8800
    ctx->pc = 0x1a1f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34816 << 16));
    // 0x1a1f2c: 0x34649000  ori         $a0, $v1, 0x9000
    ctx->pc = 0x1a1f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1a1f30: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x1a1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a1f34: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1f38: 0x3404fffd  ori         $a0, $zero, 0xFFFD
    ctx->pc = 0x1a1f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1a1f3c: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x1a1f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a1f40: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1f44: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a1f48: 0x2463ebe0  addiu       $v1, $v1, -0x1420
    ctx->pc = 0x1a1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962144));
    // 0x1a1f4c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a1f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1a1f50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a1f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1f54: 0x24700088  addiu       $s0, $v1, 0x88
    ctx->pc = 0x1a1f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
    // 0x1a1f58: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a1f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1f5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a1f60: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x1a1f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x1a1f64: 0x34632b16  ori         $v1, $v1, 0x2B16
    ctx->pc = 0x1a1f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x1a1f68: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a1f6c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a1f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a1f70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1f74: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1a1f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1a1f78: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a1f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a1f7c: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x1a1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a1f80: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a1f84: 0x3c030330  lui         $v1, 0x330
    ctx->pc = 0x1a1f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)816 << 16));
    // 0x1a1f88: 0x34640ff0  ori         $a0, $v1, 0xFF0
    ctx->pc = 0x1a1f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4080);
    // 0x1a1f8c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1a1f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a1f90: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1f94: 0x3c0382c0  lui         $v1, 0x82C0
    ctx->pc = 0x1a1f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33472 << 16));
    // 0x1a1f98: 0x34647800  ori         $a0, $v1, 0x7800
    ctx->pc = 0x1a1f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30720);
    // 0x1a1f9c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x1a1f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a1fa0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1fa4: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1a1fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1a1fa8: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x1a1fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a1fac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1fb0: 0x3c038460  lui         $v1, 0x8460
    ctx->pc = 0x1a1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33888 << 16));
    // 0x1a1fb4: 0x34648800  ori         $a0, $v1, 0x8800
    ctx->pc = 0x1a1fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34816);
    // 0x1a1fb8: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x1a1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a1fbc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1fc0: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1a1fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1a1fc4: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x1a1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a1fc8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a1fcc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a1fd0: 0x2463ec08  addiu       $v1, $v1, -0x13F8
    ctx->pc = 0x1a1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962184));
    // 0x1a1fd4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a1fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1a1fd8: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x1a1fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a1fdc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a1fe0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a1fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a1fe4: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x1a1fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x1a1fe8: 0x34632b16  ori         $v1, $v1, 0x2B16
    ctx->pc = 0x1a1fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x1a1fec: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a1fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a1ff0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a1ff4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1ff8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1a1ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1a1ffc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a2000: 0x3c040330  lui         $a0, 0x330
    ctx->pc = 0x1a2000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)816 << 16));
    // 0x1a2004: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x1a2004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a2008: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a200c: 0x3c030660  lui         $v1, 0x660
    ctx->pc = 0x1a200cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1632 << 16));
    // 0x1a2010: 0x34640ff0  ori         $a0, $v1, 0xFF0
    ctx->pc = 0x1a2010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4080);
    // 0x1a2014: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1a2014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a2018: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a201c: 0x3c038400  lui         $v1, 0x8400
    ctx->pc = 0x1a201cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33792 << 16));
    // 0x1a2020: 0x34647800  ori         $a0, $v1, 0x7800
    ctx->pc = 0x1a2020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30720);
    // 0x1a2024: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x1a2024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a2028: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a202c: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1a202cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1a2030: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x1a2030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a2034: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a2038: 0x3c0385a0  lui         $v1, 0x85A0
    ctx->pc = 0x1a2038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34208 << 16));
    // 0x1a203c: 0x34648800  ori         $a0, $v1, 0x8800
    ctx->pc = 0x1a203cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34816);
    // 0x1a2040: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x1a2040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a2044: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a2048: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1a2048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1a204c: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x1a204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a2050: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a2054: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a2054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a2058: 0x2463ec08  addiu       $v1, $v1, -0x13F8
    ctx->pc = 0x1a2058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962184));
    // 0x1a205c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a205cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1a2060: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x1a2060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a2064: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a2064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2068: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a2068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a206c: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x1a206cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x1a2070: 0x34632b16  ori         $v1, $v1, 0x2B16
    ctx->pc = 0x1a2070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x1a2074: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a2074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a2078: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a2078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a207c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a2080: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1a2080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1a2084: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a2084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a2088: 0x3c040660  lui         $a0, 0x660
    ctx->pc = 0x1a2088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1632 << 16));
    // 0x1a208c: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x1a208cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a2090: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a2094: 0x3c030990  lui         $v1, 0x990
    ctx->pc = 0x1a2094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2448 << 16));
    // 0x1a2098: 0x34640ff0  ori         $a0, $v1, 0xFF0
    ctx->pc = 0x1a2098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4080);
    // 0x1a209c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1a209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a20a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a20a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a20a4: 0x3c0382c0  lui         $v1, 0x82C0
    ctx->pc = 0x1a20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33472 << 16));
    // 0x1a20a8: 0x34647800  ori         $a0, $v1, 0x7800
    ctx->pc = 0x1a20a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30720);
    // 0x1a20ac: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x1a20acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a20b0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a20b4: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1a20b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1a20b8: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x1a20b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a20bc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a20c0: 0x3c038460  lui         $v1, 0x8460
    ctx->pc = 0x1a20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33888 << 16));
    // 0x1a20c4: 0x34648800  ori         $a0, $v1, 0x8800
    ctx->pc = 0x1a20c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34816);
    // 0x1a20c8: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x1a20c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a20cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a20d0: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1a20d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1a20d4: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x1a20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a20d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a20d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a20dc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a20e0: 0x2463ec08  addiu       $v1, $v1, -0x13F8
    ctx->pc = 0x1a20e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962184));
    // 0x1a20e4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1a20e8: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x1a20e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a20ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a20ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a20f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a20f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a20f4: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x1a20f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x1a20f8: 0x34632b16  ori         $v1, $v1, 0x2B16
    ctx->pc = 0x1a20f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x1a20fc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a2100: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a2100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a2104: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a2104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a2108: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1a2108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1a210c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a210cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a2110: 0x3c040990  lui         $a0, 0x990
    ctx->pc = 0x1a2110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2448 << 16));
    // 0x1a2114: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x1a2114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a2118: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a211c: 0x3c030cc0  lui         $v1, 0xCC0
    ctx->pc = 0x1a211cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3264 << 16));
    // 0x1a2120: 0x34640ff0  ori         $a0, $v1, 0xFF0
    ctx->pc = 0x1a2120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4080);
    // 0x1a2124: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1a2124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a2128: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a212c: 0x3c038400  lui         $v1, 0x8400
    ctx->pc = 0x1a212cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33792 << 16));
    // 0x1a2130: 0x34647400  ori         $a0, $v1, 0x7400
    ctx->pc = 0x1a2130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29696);
    // 0x1a2134: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x1a2134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a2138: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a213c: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1a213cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1a2140: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x1a2140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a2144: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a2148: 0x3c0385a0  lui         $v1, 0x85A0
    ctx->pc = 0x1a2148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34208 << 16));
    // 0x1a214c: 0x34648400  ori         $a0, $v1, 0x8400
    ctx->pc = 0x1a214cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33792);
    // 0x1a2150: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x1a2150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a2154: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a2158: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1a2158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1a215c: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x1a215cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a2160: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a2160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a2164: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a2164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a2168: 0x2463ec08  addiu       $v1, $v1, -0x13F8
    ctx->pc = 0x1a2168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962184));
    // 0x1a216c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a216cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1a2170: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x1a2170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a2174: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a2174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2178: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a2178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a217c: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x1a217cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x1a2180: 0x34632b16  ori         $v1, $v1, 0x2B16
    ctx->pc = 0x1a2180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x1a2184: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a2184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a2188: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a2188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a218c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a2190: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1a2190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1a2194: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a2194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a2198: 0x3c040cc0  lui         $a0, 0xCC0
    ctx->pc = 0x1a2198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3264 << 16));
    // 0x1a219c: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x1a219cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a21a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a21a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a21a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a21a8: 0x34640ff0  ori         $a0, $v1, 0xFF0
    ctx->pc = 0x1a21a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4080);
    // 0x1a21ac: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1a21acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a21b0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a21b4: 0x3c038400  lui         $v1, 0x8400
    ctx->pc = 0x1a21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33792 << 16));
    // 0x1a21b8: 0x34647c00  ori         $a0, $v1, 0x7C00
    ctx->pc = 0x1a21b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31744);
    // 0x1a21bc: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x1a21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a21c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a21c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a21c4: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1a21c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1a21c8: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x1a21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a21cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a21ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a21d0: 0x3c0385a0  lui         $v1, 0x85A0
    ctx->pc = 0x1a21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34208 << 16));
    // 0x1a21d4: 0x34648c00  ori         $a0, $v1, 0x8C00
    ctx->pc = 0x1a21d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35840);
    // 0x1a21d8: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x1a21d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a21dc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a21e0: 0x3404fffe  ori         $a0, $zero, 0xFFFE
    ctx->pc = 0x1a21e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1a21e4: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x1a21e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1a21e8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a21e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1a21ec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a21f0: 0x2463ec08  addiu       $v1, $v1, -0x13F8
    ctx->pc = 0x1a21f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962184));
    // 0x1a21f4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1a21f8: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x1a21f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a21fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a21fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2200: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a2200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a2204: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1a2204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x1a2208: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1a2208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1a220c: 0x34641043  ori         $a0, $v1, 0x1043
    ctx->pc = 0x1a220cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4163);
    // 0x1a2210: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a2210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a2214: 0xac64006c  sw          $a0, 0x6C($v1)
    ctx->pc = 0x1a2214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 4));
    // 0x1a2218: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a2218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a221c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1a221cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a2220: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1a2220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1a2224: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a2224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a2228: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a2228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a222c: 0xfc640070  sd          $a0, 0x70($v1)
    ctx->pc = 0x1a222cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 4));
    // 0x1a2230: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a2230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1a2234: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a2234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a2238: 0xac640078  sw          $a0, 0x78($v1)
    ctx->pc = 0x1a2238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 4));
    // 0x1a223c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1a223cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1a2240: 0x34641048  ori         $a0, $v1, 0x1048
    ctx->pc = 0x1a2240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x1a2244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a2244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a2248: 0xac64007c  sw          $a0, 0x7C($v1)
    ctx->pc = 0x1a2248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 4));
    // 0x1a224c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1a224cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1a2250: 0x34640003  ori         $a0, $v1, 0x3
    ctx->pc = 0x1a2250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1a2254: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a2254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a2258: 0xfc640080  sd          $a0, 0x80($v1)
    ctx->pc = 0x1a2258u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 4));
    // 0x1a225c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a225cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a2260: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x1a2260u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1a2264: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1a2264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1a2268: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a2268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a226c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A226Cu;
    {
        const bool branch_taken_0x1a226c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a226c) {
            ctx->pc = 0x1A2288u;
            return;
        }
    }
    ctx->pc = 0x1A2274u;
    // 0x1a2274: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x1a2274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1a2278: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a2278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a227c: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1a227cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1a2280: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2280u;
    {
        const bool branch_taken_0x1a2280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2280) {
            ctx->pc = 0x1A2294u;
            return;
        }
    }
    ctx->pc = 0x1A2288u;
}
