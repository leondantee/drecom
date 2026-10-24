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

// Function: entry_0022cda0
// Address: 0x22cda0 - 0x22cdd8
void entry_0022cda0_0x22cda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022cda0_0x22cda0");
#endif

    ctx->pc = 0x22cda0u;

    // 0x22cda0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cda4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x22cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22cda8: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x22cda8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x22cdac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22cdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22cdb0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22cdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22cdb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CDB4u;
    {
        const bool branch_taken_0x22cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cdb4) {
            ctx->pc = 0x22CDD8u;
            return;
        }
    }
    ctx->pc = 0x22CDBCu;
    // 0x22cdbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22cdc0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22cdc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22cdc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22cdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cdcc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x22cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cdd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22cdd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22cdd4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22cdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    ctx->pc = 0x22cdd8u;
}
