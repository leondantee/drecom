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

// Function: entry_001ed9ec
// Address: 0x1ed9ec - 0x1eda44
void entry_001ed9ec_0x1ed9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed9ec_0x1ed9ec");
#endif

    ctx->pc = 0x1ed9ecu;

    // 0x1ed9ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ed9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ed9f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ed9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed9f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ed9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ed9f8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1ed9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1ed9fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ed9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1eda00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eda00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eda04: 0x0  nop
    ctx->pc = 0x1eda04u;
    // NOP
    // 0x1eda08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eda08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eda0c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1eda0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1eda10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eda10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eda14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eda14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eda18: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1eda18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eda1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eda1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eda20: 0x0  nop
    ctx->pc = 0x1eda20u;
    // NOP
    // 0x1eda24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eda24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eda28: 0x0  nop
    ctx->pc = 0x1eda28u;
    // NOP
    // 0x1eda2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDA2Cu;
    {
        const bool branch_taken_0x1eda2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eda2c) {
            ctx->pc = 0x1EDA44u;
            return;
        }
    }
    ctx->pc = 0x1EDA34u;
    // 0x1eda34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eda34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eda38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eda38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eda3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eda40: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1eda40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x1eda44u;
}
