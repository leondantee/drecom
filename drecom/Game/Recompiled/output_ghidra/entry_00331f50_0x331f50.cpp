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

// Function: entry_00331f50
// Address: 0x331f50 - 0x332034
void entry_00331f50_0x331f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331f50_0x331f50");
#endif

    ctx->pc = 0x331f50u;

    // 0x331f50: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x331f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x331f54: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x331F54u;
    {
        const bool branch_taken_0x331f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x331f54) {
            ctx->pc = 0x331F24u;
            return;
        }
    }
    ctx->pc = 0x331F5Cu;
    // 0x331f5c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x331f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x331f60: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x331f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x331f64: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x331f64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x331f68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x331f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x331f6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x331f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x331f70: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x331f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f74: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x331f74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x331f78: 0xe7ac0120  swc1        $f12, 0x120($sp)
    ctx->pc = 0x331f78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x331f7c: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x331f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x331f80: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x331f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x331f84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x331f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x331f88: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x331f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x331f8c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x331f8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x331f90: 0xe7ac0128  swc1        $f12, 0x128($sp)
    ctx->pc = 0x331f90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x331f94: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x331f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x331f98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x331f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x331f9c: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x331f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x331fa0: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x331fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x331fa4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x331fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x331fa8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x331fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x331fac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x331facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x331fb0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x331fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x331fb4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x331fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x331fb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x331fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x331fbc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x331fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331fc0: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x331fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x331fc4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x331fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x331fc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331fcc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x331fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x331fd0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x331fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x331fd4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x331fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x331fd8: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x331fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x331fdc: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x331fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x331fe0: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x331fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x331fe4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x331fe8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x331fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x331fec: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x331fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x331ff0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x331ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x331ff4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x331ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x331ff8: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x331ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x331ffc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x331ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x332000: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x332000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x332004: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x332004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x332008: 0x826365af  lb          $v1, 0x65AF($s3)
    ctx->pc = 0x332008u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26031)));
    // 0x33200c: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x33200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x332010: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x332010u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x332014: 0x16e20007  bne         $s7, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x332014u;
    {
        const bool branch_taken_0x332014 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x332014) {
            ctx->pc = 0x332034u;
            return;
        }
    }
    ctx->pc = 0x33201Cu;
    // 0x33201c: 0x3c068046  lui         $a2, 0x8046
    ctx->pc = 0x33201cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32838 << 16));
    // 0x332020: 0x34c35094  ori         $v1, $a2, 0x5094
    ctx->pc = 0x332020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20628);
    // 0x332024: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x332024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x332028: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x332028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33202c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33202Cu;
    {
        const bool branch_taken_0x33202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33202c) {
            ctx->pc = 0x332048u;
            return;
        }
    }
    ctx->pc = 0x332034u;
}
