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

// Function: entry_0021f494
// Address: 0x21f494 - 0x21f598
void entry_0021f494_0x21f494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f494_0x21f494");
#endif

    switch (ctx->pc) {
        case 0x21f4acu: goto label_21f4ac;
        case 0x21f4c0u: goto label_21f4c0;
        case 0x21f4d8u: goto label_21f4d8;
        case 0x21f56cu: goto label_21f56c;
        default: break;
    }

    ctx->pc = 0x21f494u;

    // 0x21f494: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21f494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21f498: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21f498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f49c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x21f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f4a0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x21f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x21f4a4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x21F4A4u;
    SET_GPR_U32(ctx, 31, 0x21F4ACu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x21F4ACu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F4ACu) { return; }
    ctx->pc = 0x21F4ACu;
label_21f4ac:
    // 0x21f4ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x21f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f4b0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x21f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x21f4b4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x21f4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21f4b8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x21F4B8u;
    SET_GPR_U32(ctx, 31, 0x21F4C0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x21F4C0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21F4C0u) { return; }
    ctx->pc = 0x21F4C0u;
label_21f4c0:
    // 0x21f4c0: 0x24043001  addiu       $a0, $zero, 0x3001
    ctx->pc = 0x21f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x21f4c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21f4c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f4c8: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x21f4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f4cc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21f4ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f4d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21F4D0u;
    SET_GPR_U32(ctx, 31, 0x21F4D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21F4D0u, 0x21F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4D8u;
label_21f4d8:
    // 0x21f4d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f4dc: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21f4dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21f4e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f4e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f4e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f4ec: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x21f4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x21f4f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f4f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f4f8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x21f4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f4fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f500: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f504: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21f504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f508: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f50c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f510: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21f510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f514: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f518: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f51c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21f51cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f520: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f524: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f524u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f528: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21f528u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f52c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f530: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f530u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f534: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21f534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f538: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f53c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f540: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21f540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f544: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f548: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f54c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21f54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f550: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f554: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21f554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f558: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21f558u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f55c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f560: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21f560u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21f564: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21F564u;
    SET_GPR_U32(ctx, 31, 0x21F56Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21F564u, 0x21F56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F56Cu;
label_21f56c:
    // 0x21f56c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f570: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21f570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21f574: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21f574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21f578: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21f578u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21f57c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21f580: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21f580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21f584: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F584u;
    {
        const bool branch_taken_0x21f584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21f584) {
            ctx->pc = 0x21F598u;
            return;
        }
    }
    ctx->pc = 0x21F58Cu;
    // 0x21f58c: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x21f58cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21f590: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21F590u;
    {
        const bool branch_taken_0x21f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f590) {
            ctx->pc = 0x21F5BCu;
            return;
        }
    }
    ctx->pc = 0x21F598u;
}
