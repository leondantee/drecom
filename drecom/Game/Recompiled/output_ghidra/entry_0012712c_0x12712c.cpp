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

// Function: entry_0012712c
// Address: 0x12712c - 0x12718c
void entry_0012712c_0x12712c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012712c_0x12712c");
#endif

    ctx->pc = 0x12712cu;

    // 0x12712c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12712cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127130: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x127130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127134: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x127134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x127138: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x127138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x12713c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12713cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127140: 0x0  nop
    ctx->pc = 0x127140u;
    // NOP
    // 0x127144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x127144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127148: 0x0  nop
    ctx->pc = 0x127148u;
    // NOP
    // 0x12714c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x12714Cu;
    {
        const bool branch_taken_0x12714c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12714c) {
            ctx->pc = 0x12718Cu;
            return;
        }
    }
    ctx->pc = 0x127154u;
    // 0x127154: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127158: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12715c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12715cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127160: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x127160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x127164: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127168: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12716c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127170: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127174: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127178: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127178u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12717c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127180: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x127184: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x127184u;
    {
        const bool branch_taken_0x127184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127184) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x12718Cu;
}
