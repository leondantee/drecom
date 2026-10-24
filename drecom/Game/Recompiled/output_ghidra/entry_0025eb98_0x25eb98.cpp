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

// Function: entry_0025eb98
// Address: 0x25eb98 - 0x25ec30
void entry_0025eb98_0x25eb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025eb98_0x25eb98");
#endif

    ctx->pc = 0x25eb98u;

    // 0x25eb98: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25eb98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25eb9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25eb9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25eba0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25eba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25eba4: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x25EBA4u;
    {
        const bool branch_taken_0x25eba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eba4) {
            ctx->pc = 0x25EE10u;
            return;
        }
    }
    ctx->pc = 0x25EBACu;
    // 0x25ebac: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25ebb0: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x25ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x25ebb4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25ebb8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x25ebb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ebbc: 0x92020143  lbu         $v0, 0x143($s0)
    ctx->pc = 0x25ebbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 323)));
    // 0x25ebc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25ebc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25ebc4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25ebc8: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x25EBC8u;
    {
        const bool branch_taken_0x25ebc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25ebc8) {
            ctx->pc = 0x25ECB8u;
            return;
        }
    }
    ctx->pc = 0x25EBD0u;
    // 0x25ebd0: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25ebd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25ebd4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ebd8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x25ebd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x25ebdc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x25EBDCu;
    {
        const bool branch_taken_0x25ebdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ebdc) {
            ctx->pc = 0x25ECB8u;
            return;
        }
    }
    ctx->pc = 0x25EBE4u;
    // 0x25ebe4: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25ebe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25ebe8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ebec: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x25ebecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x25ebf0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25EBF0u;
    {
        const bool branch_taken_0x25ebf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ebf0) {
            ctx->pc = 0x25EC30u;
            return;
        }
    }
    ctx->pc = 0x25EBF8u;
    // 0x25ebf8: 0xc6210134  lwc1        $f1, 0x134($s1)
    ctx->pc = 0x25ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ebfc: 0xc6000134  lwc1        $f0, 0x134($s0)
    ctx->pc = 0x25ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ec00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ec04: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x25ec04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x25ec08: 0xc6210138  lwc1        $f1, 0x138($s1)
    ctx->pc = 0x25ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ec0c: 0xc6000138  lwc1        $f0, 0x138($s0)
    ctx->pc = 0x25ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ec10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ec14: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x25ec14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x25ec18: 0xc621013c  lwc1        $f1, 0x13C($s1)
    ctx->pc = 0x25ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ec1c: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x25ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ec20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25ec20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ec24: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x25ec24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x25ec28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25EC28u;
    {
        const bool branch_taken_0x25ec28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ec28) {
            ctx->pc = 0x25EC58u;
            return;
        }
    }
    ctx->pc = 0x25EC30u;
}
