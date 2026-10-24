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

// Function: entry_001fc24c
// Address: 0x1fc24c - 0x1fc2bc
void entry_001fc24c_0x1fc24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc24c_0x1fc24c");
#endif

    switch (ctx->pc) {
        case 0x1fc294u: goto label_1fc294;
        case 0x1fc2acu: goto label_1fc2ac;
        default: break;
    }

    ctx->pc = 0x1fc24cu;

    // 0x1fc24c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc250: 0x90420343  lbu         $v0, 0x343($v0)
    ctx->pc = 0x1fc250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 835)));
    // 0x1fc254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc258: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fc258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fc25c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FC25Cu;
    {
        const bool branch_taken_0x1fc25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc25c) {
            ctx->pc = 0x1FC2BCu;
            return;
        }
    }
    ctx->pc = 0x1FC264u;
    // 0x1fc264: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc268: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x1fc268u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x1fc26c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc270: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fc270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1fc274: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC274u;
    {
        const bool branch_taken_0x1fc274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc274) {
            ctx->pc = 0x1FC2BCu;
            return;
        }
    }
    ctx->pc = 0x1FC27Cu;
    // 0x1fc27c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1fc27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc280: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc284: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x1fc284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1fc288: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x1fc288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x1fc28c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1FC28Cu;
    SET_GPR_U32(ctx, 31, 0x1FC294u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1FC294u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC294u) { return; }
    ctx->pc = 0x1FC294u;
label_1fc294:
    // 0x1fc294: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc298: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc29c: 0x24450380  addiu       $a1, $v0, 0x380
    ctx->pc = 0x1fc29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x1fc2a0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2a4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1FC2A4u;
    SET_GPR_U32(ctx, 31, 0x1FC2ACu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1FC2ACu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FC2ACu) { return; }
    ctx->pc = 0x1FC2ACu;
label_1fc2ac:
    // 0x1fc2ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fc2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fc2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc2b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fc2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->pc = 0x1fc2bcu;
}
