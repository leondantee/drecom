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

// Function: entry_00192320
// Address: 0x192320 - 0x192368
void entry_00192320_0x192320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192320_0x192320");
#endif

    ctx->pc = 0x192320u;

    // 0x192320: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x192320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192324: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x192324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x192328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19232c: 0x0  nop
    ctx->pc = 0x19232cu;
    // NOP
    // 0x192330: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192334: 0x0  nop
    ctx->pc = 0x192334u;
    // NOP
    // 0x192338: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x192338u;
    {
        const bool branch_taken_0x192338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192338) {
            ctx->pc = 0x192368u;
            return;
        }
    }
    ctx->pc = 0x192340u;
    // 0x192340: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x192340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192344: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x192344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x192348: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x192348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x19234c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19234cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192350: 0x0  nop
    ctx->pc = 0x192350u;
    // NOP
    // 0x192354: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192358: 0x0  nop
    ctx->pc = 0x192358u;
    // NOP
    // 0x19235c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x19235Cu;
    {
        const bool branch_taken_0x19235c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19235c) {
            ctx->pc = 0x192370u;
            return;
        }
    }
    ctx->pc = 0x192364u;
    // 0x192364: 0x0  nop
    ctx->pc = 0x192364u;
    // NOP
    ctx->pc = 0x192368u;
}
