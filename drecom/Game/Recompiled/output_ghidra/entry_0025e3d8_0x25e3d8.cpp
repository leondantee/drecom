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

// Function: entry_0025e3d8
// Address: 0x25e3d8 - 0x25e480
void entry_0025e3d8_0x25e3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e3d8_0x25e3d8");
#endif

    switch (ctx->pc) {
        case 0x25e418u: goto label_25e418;
        case 0x25e42cu: goto label_25e42c;
        case 0x25e440u: goto label_25e440;
        case 0x25e458u: goto label_25e458;
        case 0x25e470u: goto label_25e470;
        default: break;
    }

    ctx->pc = 0x25e3d8u;

    // 0x25e3d8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x25e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x25e3dc: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x25e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25e3e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e3e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e3e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e3ec: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25e3f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e3f4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x25e3f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e3f8: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25e3f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25e3fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e400: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25e400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25e404: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25E404u;
    {
        const bool branch_taken_0x25e404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e404) {
            ctx->pc = 0x25E480u;
            return;
        }
    }
    ctx->pc = 0x25E40Cu;
    // 0x25e40c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e410: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25E410u;
    SET_GPR_U32(ctx, 31, 0x25E418u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25E418u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E418u) { return; }
    ctx->pc = 0x25E418u;
label_25e418:
    // 0x25e418: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25e418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e41c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e420: 0xc62c011c  lwc1        $f12, 0x11C($s1)
    ctx->pc = 0x25e420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25e424: 0xc040d0e  jal         func_103438
    ctx->pc = 0x25E424u;
    SET_GPR_U32(ctx, 31, 0x25E42Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25E42Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E42Cu) { return; }
    ctx->pc = 0x25E42Cu;
label_25e42c:
    // 0x25e42c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e430: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25e430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e434: 0xc62c0120  lwc1        $f12, 0x120($s1)
    ctx->pc = 0x25e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25e438: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x25E438u;
    SET_GPR_U32(ctx, 31, 0x25E440u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25E440u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E440u) { return; }
    ctx->pc = 0x25E440u;
label_25e440:
    // 0x25e440: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e444: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x25e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e448: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25e448u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e44c: 0xc62c0124  lwc1        $f12, 0x124($s1)
    ctx->pc = 0x25e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25e450: 0xc040ce4  jal         func_103390
    ctx->pc = 0x25E450u;
    SET_GPR_U32(ctx, 31, 0x25E458u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25E458u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E458u) { return; }
    ctx->pc = 0x25E458u;
label_25e458:
    // 0x25e458: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25e458u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e45c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25e45cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25e460: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25e460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25e464: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x25e464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e468: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25E468u;
    SET_GPR_U32(ctx, 31, 0x25E470u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25E468u, 0x25E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E470u;
label_25e470:
    // 0x25e470: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x25e470u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25e474: 0x3062ffbf  andi        $v0, $v1, 0xFFBF
    ctx->pc = 0x25e474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x25e478: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x25e478u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e47c: 0x0  nop
    ctx->pc = 0x25e47cu;
    // NOP
    ctx->pc = 0x25e480u;
}
