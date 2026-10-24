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

// Function: Em07_R0_init
// Address: 0x2d5bd0 - 0x2d5d64
void Em07_R0_init_0x2d5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R0_init_0x2d5bd0");
#endif

    switch (ctx->pc) {
        case 0x2d5ce8u: goto label_2d5ce8;
        default: break;
    }

    ctx->pc = 0x2d5bd0u;

    // 0x2d5bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5bdc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d5bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2d5be0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2d5be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2d5be4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d5be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5be8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5bec: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2d5becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2d5bf0: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2d5bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2d5bf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d5bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5bf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5bfc: 0xe46011e4  swc1        $f0, 0x11E4($v1)
    ctx->pc = 0x2d5bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4580), bits); }
    // 0x2d5c00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d5c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5c04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d5c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d5c0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c10: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d5c10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5c14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c18: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d5c18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5c1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c20: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d5c20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5c24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d5c2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c30: 0xac601330  sw          $zero, 0x1330($v1)
    ctx->pc = 0x2d5c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 0));
    // 0x2d5c34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c38: 0xac601348  sw          $zero, 0x1348($v1)
    ctx->pc = 0x2d5c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 0));
    // 0x2d5c3c: 0x3c0346bb  lui         $v1, 0x46BB
    ctx->pc = 0x2d5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18107 << 16));
    // 0x2d5c40: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2d5c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2d5c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d5c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d5c48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c4c: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x2d5c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x2d5c50: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d5c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c54: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2d5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2d5c58: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2d5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2d5c5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d5c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d5c60: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2d5c60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2d5c64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d5c6c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2d5c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2d5c70: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2d5c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2d5c74: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5c78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c7c: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2d5c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d5c80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c84: 0xa0601219  sb          $zero, 0x1219($v1)
    ctx->pc = 0x2d5c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d5c88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c8c: 0xac601334  sw          $zero, 0x1334($v1)
    ctx->pc = 0x2d5c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 0));
    // 0x2d5c90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c94: 0xac601338  sw          $zero, 0x1338($v1)
    ctx->pc = 0x2d5c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 0));
    // 0x2d5c98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5c9c: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d5ca0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2d5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2d5ca4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5ca8: 0xac601340  sw          $zero, 0x1340($v1)
    ctx->pc = 0x2d5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4928), GPR_U32(ctx, 0));
    // 0x2d5cac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5cb0: 0x8c710058  lw          $s1, 0x58($v1)
    ctx->pc = 0x2d5cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2d5cb4: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x2d5cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2d5cb8: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x2d5cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x2d5cbc: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x2d5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2d5cc0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2d5cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x2d5cc4: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x2d5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2d5cc8: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2d5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x2d5ccc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2d5cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2d5cd0: 0x24648880  addiu       $a0, $v1, -0x7780
    ctx->pc = 0x2d5cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936704));
    // 0x2d5cd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5cd8: 0xac640354  sw          $a0, 0x354($v1)
    ctx->pc = 0x2d5cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 852), GPR_U32(ctx, 4));
    // 0x2d5cdc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d5cdcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d5ce0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D5CE0u;
    {
        const bool branch_taken_0x2d5ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5ce0) {
            ctx->pc = 0x2D5D38u;
            goto label_2d5d38;
        }
    }
    ctx->pc = 0x2D5CE8u;
label_2d5ce8:
    // 0x2d5ce8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2d5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d5cec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d5cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d5cf0: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x2d5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x2d5cf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d5cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5cf8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2d5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d5cfc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x2d5cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x2d5d00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d5d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d5d04: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2D5D04u;
    {
        const bool branch_taken_0x2d5d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d04) {
            ctx->pc = 0x2D5D34u;
            goto label_2d5d34;
        }
    }
    ctx->pc = 0x2D5D0Cu;
    // 0x2d5d0c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2d5d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d5d10: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d5d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d5d14: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x2d5d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x2d5d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d5d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d5d1c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2d5d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d5d20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5d24: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d5d28: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d5d2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5D2Cu;
    {
        const bool branch_taken_0x2d5d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d2c) {
            ctx->pc = 0x2D5D50u;
            goto label_2d5d50;
        }
    }
    ctx->pc = 0x2D5D34u;
label_2d5d34:
    // 0x2d5d34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d5d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d5d38:
    // 0x2d5d38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5d3c: 0x946310a4  lhu         $v1, 0x10A4($v1)
    ctx->pc = 0x2d5d3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4260)));
    // 0x2d5d40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2d5d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2d5d44: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2d5d44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d5d48: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2D5D48u;
    {
        const bool branch_taken_0x2d5d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5d48) {
            ctx->pc = 0x2D5CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5ce8;
        }
    }
    ctx->pc = 0x2D5D50u;
label_2d5d50:
    // 0x2d5d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d5d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d5d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5d58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d5d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d5d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5D64u;
}
