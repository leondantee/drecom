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

// Function: entry_00184aec
// Address: 0x184aec - 0x184b8c
void entry_00184aec_0x184aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184aec_0x184aec");
#endif

    ctx->pc = 0x184aecu;

    // 0x184aec: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x184aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184af0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x184af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x184af4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x184af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x184af8: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x184AF8u;
    {
        const bool branch_taken_0x184af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184af8) {
            ctx->pc = 0x184C00u;
            return;
        }
    }
    ctx->pc = 0x184B00u;
    // 0x184b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184b04: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x184b04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x184b08: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x184b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184b0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x184b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x184b10: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x184b10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x184b14: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x184b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184b18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x184b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x184b1c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x184b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x184b20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x184b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x184b24: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x184b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x184b28: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x184b28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x184b2c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x184b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184b30: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x184b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x184b34: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x184b34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x184b38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x184b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x184b3c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x184b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x184b40: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x184b40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x184b44: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x184b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184b48: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x184b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x184b4c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x184b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184b50: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x184b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x184b54: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x184b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184b58: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x184b58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184b5c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x184b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x184b60: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x184b60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x184b64: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x184b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x184b68: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x184b68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184b6c: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x184b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x184b70: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x184b70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x184b74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x184b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x184b78: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x184B78u;
    {
        const bool branch_taken_0x184b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184b78) {
            ctx->pc = 0x184B8Cu;
            return;
        }
    }
    ctx->pc = 0x184B80u;
    // 0x184b80: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x184b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x184b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x184B84u;
    {
        const bool branch_taken_0x184b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184b84) {
            ctx->pc = 0x184B98u;
            return;
        }
    }
    ctx->pc = 0x184B8Cu;
}
