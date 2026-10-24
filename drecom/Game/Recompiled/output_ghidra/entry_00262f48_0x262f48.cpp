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

// Function: entry_00262f48
// Address: 0x262f48 - 0x262fb0
void entry_00262f48_0x262f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00262f48_0x262f48");
#endif

    ctx->pc = 0x262f48u;

    // 0x262f48: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x262f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x262f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x262f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262f50: 0x0  nop
    ctx->pc = 0x262f50u;
    // NOP
    // 0x262f54: 0x460b0300  add.s       $f12, $f0, $f11
    ctx->pc = 0x262f54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x262f58: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x262f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262f5c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x262f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262f60: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x262f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x262f64: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x262f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x262f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x262f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262f6c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x262f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x262f70: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x262f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x262f74: 0xc5ae0000  lwc1        $f14, 0x0($t5)
    ctx->pc = 0x262f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x262f78: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x262f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x262f7c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x262f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x262f80: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x262f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x262f84: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x262f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x262f88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x262f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x262f8c: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x262f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x262f90: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x262f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x262f94: 0xc5b00004  lwc1        $f16, 0x4($t5)
    ctx->pc = 0x262f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x262f98: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x262f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x262f9c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x262f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x262fa0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x262fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x262fa4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x262FA4u;
    {
        const bool branch_taken_0x262fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262fa4) {
            ctx->pc = 0x262FB0u;
            return;
        }
    }
    ctx->pc = 0x262FACu;
    // 0x262fac: 0x460d7380  add.s       $f14, $f14, $f13
    ctx->pc = 0x262facu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[13]);
    ctx->pc = 0x262fb0u;
}
