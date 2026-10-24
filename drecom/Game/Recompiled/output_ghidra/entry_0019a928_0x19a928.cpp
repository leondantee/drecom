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

// Function: entry_0019a928
// Address: 0x19a928 - 0x19a96c
void entry_0019a928_0x19a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a928_0x19a928");
#endif

    ctx->pc = 0x19a928u;

    // 0x19a928: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a92c: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x19a92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a930: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x19a930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x19a934: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x19a934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x19a938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a93c: 0x0  nop
    ctx->pc = 0x19a93cu;
    // NOP
    // 0x19a940: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19a940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a944: 0x0  nop
    ctx->pc = 0x19a944u;
    // NOP
    // 0x19a948: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x19A948u;
    {
        const bool branch_taken_0x19a948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a948) {
            ctx->pc = 0x19A96Cu;
            return;
        }
    }
    ctx->pc = 0x19A950u;
    // 0x19a950: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x19a950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x19a954: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x19a954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x19a958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a95c: 0x0  nop
    ctx->pc = 0x19a95cu;
    // NOP
    // 0x19a960: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x19a960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x19a964: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A964u;
    {
        const bool branch_taken_0x19a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a964) {
            ctx->pc = 0x19A978u;
            return;
        }
    }
    ctx->pc = 0x19A96Cu;
}
