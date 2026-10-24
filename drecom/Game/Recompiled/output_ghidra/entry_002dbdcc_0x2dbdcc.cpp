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

// Function: entry_002dbdcc
// Address: 0x2dbdcc - 0x2dbe1c
void entry_002dbdcc_0x2dbdcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbdcc_0x2dbdcc");
#endif

    ctx->pc = 0x2dbdccu;

    // 0x2dbdcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbdd0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dbdd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dbdd4: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2DBDD4u;
    {
        const bool branch_taken_0x2dbdd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbdd4) {
            ctx->pc = 0x2DC0BCu;
            return;
        }
    }
    ctx->pc = 0x2DBDDCu;
    // 0x2dbddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbde0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2dbde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dbde4: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x2dbde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x2dbde8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2dbde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2dbdec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dbdecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbdf0: 0x0  nop
    ctx->pc = 0x2dbdf0u;
    // NOP
    // 0x2dbdf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dbdf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dbdf8: 0x0  nop
    ctx->pc = 0x2dbdf8u;
    // NOP
    // 0x2dbdfc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBDFCu;
    {
        const bool branch_taken_0x2dbdfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dbdfc) {
            ctx->pc = 0x2DBE1Cu;
            return;
        }
    }
    ctx->pc = 0x2DBE04u;
    // 0x2dbe04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dbe04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbe08: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2dbe08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2dbe0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dbe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbe10: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dbe10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dbe14: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2DBE14u;
    {
        const bool branch_taken_0x2dbe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbe14) {
            ctx->pc = 0x2DC0BCu;
            return;
        }
    }
    ctx->pc = 0x2DBE1Cu;
}
