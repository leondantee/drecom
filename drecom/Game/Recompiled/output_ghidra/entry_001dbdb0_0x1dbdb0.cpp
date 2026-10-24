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

// Function: entry_001dbdb0
// Address: 0x1dbdb0 - 0x1dc110
void entry_001dbdb0_0x1dbdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dbdb0_0x1dbdb0");
#endif

    ctx->pc = 0x1dbdb0u;

    // 0x1dbdb0: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x1dbdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x1dbdb4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1dbdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dbdb8: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x1dbdb8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
    // 0x1dbdbc: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1dbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1dbdc0: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x1dbdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dbdc4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1dbdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1dbdc8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1dbdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dbdcc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbdd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbdd4: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1dbdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dbdd8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1dbdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1dbddc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1dbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1dbde0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1dbde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dbde4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1dbde4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1dbde8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1dbde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbdec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1dbdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1dbdf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbdf4: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x1dbdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x1dbdf8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dbdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dbdfc: 0x34620106  ori         $v0, $v1, 0x106
    ctx->pc = 0x1dbdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)262);
    // 0x1dbe00: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1dbe00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1dbe04: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1dbe04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbe08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1dbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbe0c: 0x34428004  ori         $v0, $v0, 0x8004
    ctx->pc = 0x1dbe0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x1dbe10: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x1dbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
    // 0x1dbe14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbe18: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1dbe18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x1dbe1c: 0x15113c  dsll32      $v0, $s5, 4
    ctx->pc = 0x1dbe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 4));
    // 0x1dbe20: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dbe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dbe24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbe24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbe28: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbe2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbe2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbe30: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1dbe30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dbe34: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1dbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1dbe38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1dbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1dbe3c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbe3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbe40: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1dbe40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1dbe44: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x1dbe44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbe48: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1dbe48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1dbe4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1dbe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dbe50: 0xfe030050  sd          $v1, 0x50($s0)
    ctx->pc = 0x1dbe50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 3));
    // 0x1dbe54: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1dbe54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1dbe58: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1dbe58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbe5c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1dbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1dbe60: 0x34648005  ori         $a0, $v1, 0x8005
    ctx->pc = 0x1dbe60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32773);
    // 0x1dbe64: 0x3c036800  lui         $v1, 0x6800
    ctx->pc = 0x1dbe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26624 << 16));
    // 0x1dbe68: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1dbe68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1dbe6c: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x1dbe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x1dbe70: 0x16193c  dsll32      $v1, $s6, 4
    ctx->pc = 0x1dbe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 4));
    // 0x1dbe74: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1dbe74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1dbe78: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1dbe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dbe7c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbe7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbe80: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbe80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbe84: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dbe84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dbe88: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dbe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbe8c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1dbe8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1dbe90: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbe94: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dbe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbe98: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1dbe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dbe9c: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x1dbe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x1dbea0: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x1dbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x1dbea4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1dbea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1dbea8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1dbea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1dbeac: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1dbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbeb0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1dbeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbeb4: 0x34438006  ori         $v1, $v0, 0x8006
    ctx->pc = 0x1dbeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32774);
    // 0x1dbeb8: 0x3c026500  lui         $v0, 0x6500
    ctx->pc = 0x1dbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
    // 0x1dbebc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dbebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbec0: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x1dbec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x1dbec4: 0x17193c  dsll32      $v1, $s7, 4
    ctx->pc = 0x1dbec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 4));
    // 0x1dbec8: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1dbec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1dbecc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1dbeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dbed0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbed4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbed8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dbed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dbedc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbee0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1dbee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1dbee4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1dbee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbee8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbeec: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1dbeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dbef0: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x1dbef0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
    // 0x1dbef4: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x1dbef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x1dbef8: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x1dbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x1dbefc: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1dbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbf00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1dbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbf04: 0x34438007  ori         $v1, $v0, 0x8007
    ctx->pc = 0x1dbf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32775);
    // 0x1dbf08: 0x3c026e00  lui         $v0, 0x6E00
    ctx->pc = 0x1dbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
    // 0x1dbf0c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dbf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbf10: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1dbf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1dbf14: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1dbf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1dbf18: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1dbf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1dbf1c: 0x3113c  dsll32      $v0, $v1, 4
    ctx->pc = 0x1dbf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1dbf20: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dbf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dbf24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbf28: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbf2c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbf30: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1dbf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1dbf34: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1dbf34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1dbf38: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1dbf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbf3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dbf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbf40: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1dbf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1dbf44: 0xfe020080  sd          $v0, 0x80($s0)
    ctx->pc = 0x1dbf44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x1dbf48: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1dbf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1dbf4c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1dbf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbf50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1dbf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbf54: 0x34438008  ori         $v1, $v0, 0x8008
    ctx->pc = 0x1dbf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x1dbf58: 0x3c026f00  lui         $v0, 0x6F00
    ctx->pc = 0x1dbf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28416 << 16));
    // 0x1dbf5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dbf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbf60: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x1dbf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x1dbf64: 0x1e113c  dsll32      $v0, $fp, 4
    ctx->pc = 0x1dbf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 4));
    // 0x1dbf68: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dbf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dbf6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbf70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dbf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dbf74: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbf74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbf78: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1dbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1dbf7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dbf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbf80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1dbf80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1dbf84: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1dbf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1dbf88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbf8c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1dbf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1dbf90: 0xfe020090  sd          $v0, 0x90($s0)
    ctx->pc = 0x1dbf90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 2));
    // 0x1dbf94: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x1dbf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x1dbf98: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1dbf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dbf9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1dbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1dbfa0: 0x34428009  ori         $v0, $v0, 0x8009
    ctx->pc = 0x1dbfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32777);
    // 0x1dbfa4: 0x3c036e00  lui         $v1, 0x6E00
    ctx->pc = 0x1dbfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28160 << 16));
    // 0x1dbfa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dbfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1dbfac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1dbfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1dbfb0: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x1dbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x1dbfb4: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1dbfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1dbfb8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1dbfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dbfbc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1dbfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1dbfc0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1dbfc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dbfc4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1dbfc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1dbfc8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1dbfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dbfcc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1dbfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1dbfd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1dbfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dbfd4: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x1dbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1dbfd8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1dbfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1dbfdc: 0x3c031700  lui         $v1, 0x1700
    ctx->pc = 0x1dbfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5888 << 16));
    // 0x1dbfe0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x1dbfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x1dbfe4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dbfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dbfe8: 0x34620404  ori         $v0, $v1, 0x404
    ctx->pc = 0x1dbfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x1dbfec: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x1dbfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x1dbff0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1dbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1dbff4: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x1dbff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x1dbff8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1dbff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1dbffc: 0x26b50240  addiu       $s5, $s5, 0x240
    ctx->pc = 0x1dbffcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 576));
    // 0x1dc000: 0x26d600c0  addiu       $s6, $s6, 0xC0
    ctx->pc = 0x1dc000u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 192));
    // 0x1dc004: 0x26f700c0  addiu       $s7, $s7, 0xC0
    ctx->pc = 0x1dc004u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x1dc008: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1dc008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1dc00c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1dc00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dc010: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1dc010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1dc014: 0x27de00c0  addiu       $fp, $fp, 0xC0
    ctx->pc = 0x1dc014u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 192));
    // 0x1dc018: 0x2652ffd0  addiu       $s2, $s2, -0x30
    ctx->pc = 0x1dc018u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967248));
    // 0x1dc01c: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1dc01cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1dc020: 0x1e40fee1  bgtz        $s2, . + 4 + (-0x11F << 2)
    ctx->pc = 0x1DC020u;
    {
        const bool branch_taken_0x1dc020 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1dc020) {
            ctx->pc = 0x1DBBA8u;
            return;
        }
    }
    ctx->pc = 0x1DC028u;
    // 0x1dc028: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dc028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dc02c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1dc02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dc030: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x1dc030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x1dc034: 0x266200c0  addiu       $v0, $s3, 0xC0
    ctx->pc = 0x1dc034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x1dc038: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1dc038u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dc03c: 0xafb000f8  sw          $s0, 0xF8($sp)
    ctx->pc = 0x1dc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 16));
    // 0x1dc040: 0x8fb600a4  lw          $s6, 0xA4($sp)
    ctx->pc = 0x1dc040u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1dc044: 0x26c20030  addiu       $v0, $s6, 0x30
    ctx->pc = 0x1dc044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x1dc048: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1dc048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1dc04c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1dc04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dc050: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dc050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1dc054: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1dc054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1dc058: 0x1c40fe6d  bgtz        $v0, . + 4 + (-0x193 << 2)
    ctx->pc = 0x1DC058u;
    {
        const bool branch_taken_0x1dc058 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1dc058) {
            ctx->pc = 0x1DBA10u;
            return;
        }
    }
    ctx->pc = 0x1DC060u;
    // 0x1dc060: 0x2617fff0  addiu       $s7, $s0, -0x10
    ctx->pc = 0x1dc060u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1dc064: 0x17213c  dsll32      $a0, $s7, 4
    ctx->pc = 0x1dc064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 4));
    // 0x1dc068: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1dc068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1dc06c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dc06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dc070: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc074: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc07c: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x1dc07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
    // 0x1dc080: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc084: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x1dc084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x1dc088: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc08c: 0x245e0090  addiu       $fp, $v0, 0x90
    ctx->pc = 0x1dc08cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dc090: 0xafbe00b0  sw          $fp, 0xB0($sp)
    ctx->pc = 0x1dc090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 30));
    // 0x1dc094: 0x8fb000a8  lw          $s0, 0xA8($sp)
    ctx->pc = 0x1dc094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dc098: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1dc098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1dc09c: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x1dc09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x1dc0a0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1dc0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1dc0a4: 0x62902b  sltu        $s2, $v1, $v0
    ctx->pc = 0x1dc0a4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dc0a8: 0x1640fdb1  bnez        $s2, . + 4 + (-0x24F << 2)
    ctx->pc = 0x1DC0A8u;
    {
        const bool branch_taken_0x1dc0a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc0a8) {
            ctx->pc = 0x1DB770u;
            return;
        }
    }
    ctx->pc = 0x1DC0B0u;
    // 0x1dc0b0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc0b4: 0x2213c  dsll32      $a0, $v0, 4
    ctx->pc = 0x1dc0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dc0b8: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x1dc0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x1dc0bc: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dc0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dc0c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dc0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc0c4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1dc0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1dc0c8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1dc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc0cc: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x1dc0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x1dc0d0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dc0d4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1dc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1dc0d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1dc0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dc0dc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1dc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1dc0e0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1dc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1dc0e4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1dc0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1dc0e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dc0ec: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1dc0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1dc0f0: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1dc0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1dc0f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1dc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dc0f8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1dc0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1dc0fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1dc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dc100: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1dc100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1dc104: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1dc104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1dc108: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dc108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dc10c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1dc10cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1dc110u;
}
