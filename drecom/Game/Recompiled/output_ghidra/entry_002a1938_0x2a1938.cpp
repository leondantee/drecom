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

// Function: entry_002a1938
// Address: 0x2a1938 - 0x2a19e8
void entry_002a1938_0x2a1938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1938_0x2a1938");
#endif

    switch (ctx->pc) {
        case 0x2a1960u: goto label_2a1960;
        case 0x2a197cu: goto label_2a197c;
        case 0x2a198cu: goto label_2a198c;
        case 0x2a19c4u: goto label_2a19c4;
        case 0x2a19e0u: goto label_2a19e0;
        default: break;
    }

    ctx->pc = 0x2a1938u;

    // 0x2a1938: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x2a1938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
    // 0x2a193c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a1940: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1944: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1948: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a194c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a1950: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a1950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1954: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a1954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a1958: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A1958u;
    SET_GPR_U32(ctx, 31, 0x2A1960u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A1958u, 0x2A1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1960u;
label_2a1960:
    // 0x2a1960: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a1960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a1964: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1968: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a1968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a196c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2a196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1970: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a1970u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a1974: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A1974u;
    SET_GPR_U32(ctx, 31, 0x2A197Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A1974u, 0x2A197Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A197Cu;
label_2a197c:
    // 0x2a197c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1980: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a1980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a1984: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A1984u;
    SET_GPR_U32(ctx, 31, 0x2A198Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A1984u, 0x2A198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A198Cu;
label_2a198c:
    // 0x2a198c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1990: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2a1990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2a1994: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1994u;
    {
        const bool branch_taken_0x2a1994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1994) {
            ctx->pc = 0x2A19E8u;
            return;
        }
    }
    ctx->pc = 0x2A199Cu;
    // 0x2a199c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a199cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a19a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a19a4: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x2a19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
    // 0x2a19a8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a19a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a19ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a19acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a19b0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a19b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a19b4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a19b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a19b8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a19b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a19bc: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A19BCu;
    SET_GPR_U32(ctx, 31, 0x2A19C4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A19BCu, 0x2A19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19C4u;
label_2a19c4:
    // 0x2a19c4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a19c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a19c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a19cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a19ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a19d0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2a19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a19d4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a19d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a19d8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A19D8u;
    SET_GPR_U32(ctx, 31, 0x2A19E0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A19D8u, 0x2A19E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A19E0u;
label_2a19e0:
    // 0x2a19e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a19e4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a19e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2a19e8u;
}
