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

// Function: entry_00266c78
// Address: 0x266c78 - 0x266ce8
void entry_00266c78_0x266c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266c78_0x266c78");
#endif

    ctx->pc = 0x266c78u;

    // 0x266c78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x266c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x266c7c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x266c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x266c80: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x266c80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x266c84: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x266c84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x266c88: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x266c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x266c8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x266c8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266c90: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x266c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x266c94: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x266c94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x266c98: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x266c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x266c9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x266c9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266ca0: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x266ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x266ca4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x266ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x266ca8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x266ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266cac: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x266cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x266cb0: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x266cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266cb4: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x266cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x266cb8: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x266cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x266cbc: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x266cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x266cc0: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x266cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x266cc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x266cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x266cc8: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x266cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x266ccc: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x266cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x266cd0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x266cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x266cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266CD4u;
    {
        const bool branch_taken_0x266cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266cd4) {
            ctx->pc = 0x266CE8u;
            return;
        }
    }
    ctx->pc = 0x266CDCu;
    // 0x266cdc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x266cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266ce0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266CE0u;
    {
        const bool branch_taken_0x266ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266ce0) {
            ctx->pc = 0x266CF0u;
            return;
        }
    }
    ctx->pc = 0x266CE8u;
}
