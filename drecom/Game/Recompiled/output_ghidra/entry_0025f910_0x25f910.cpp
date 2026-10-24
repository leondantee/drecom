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

// Function: entry_0025f910
// Address: 0x25f910 - 0x25f980
void entry_0025f910_0x25f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f910_0x25f910");
#endif

    switch (ctx->pc) {
        case 0x25f930u: goto label_25f930;
        case 0x25f958u: goto label_25f958;
        case 0x25f96cu: goto label_25f96c;
        case 0x25f97cu: goto label_25f97c;
        default: break;
    }

    ctx->pc = 0x25f910u;

    // 0x25f910: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25f910u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25f914: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25f914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25f918: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25f918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25f91c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25F91Cu;
    {
        const bool branch_taken_0x25f91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f91c) {
            ctx->pc = 0x25F980u;
            return;
        }
    }
    ctx->pc = 0x25F924u;
    // 0x25f924: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f928: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25F928u;
    SET_GPR_U32(ctx, 31, 0x25F930u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25F930u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F930u) { return; }
    ctx->pc = 0x25F930u;
label_25f930:
    // 0x25f930: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f934: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25f934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25f938: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f93c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x25f93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25f940: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25f940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25f944: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x25f944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25f948: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25f948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25f94c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x25f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25f950: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F950u;
    SET_GPR_U32(ctx, 31, 0x25F958u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F958u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F958u) { return; }
    ctx->pc = 0x25F958u;
label_25f958:
    // 0x25f958: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f958u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f95c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x25f95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25f960: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x25f960u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f964: 0xc040c00  jal         func_103000
    ctx->pc = 0x25F964u;
    SET_GPR_U32(ctx, 31, 0x25F96Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25F96Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F96Cu) { return; }
    ctx->pc = 0x25F96Cu;
label_25f96c:
    // 0x25f96c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x25f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25f970: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x25f970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25f974: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25F974u;
    SET_GPR_U32(ctx, 31, 0x25F97Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25F97Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25F97Cu) { return; }
    ctx->pc = 0x25F97Cu;
label_25f97c:
    // 0x25f97c: 0x0  nop
    ctx->pc = 0x25f97cu;
    // NOP
    ctx->pc = 0x25f980u;
}
