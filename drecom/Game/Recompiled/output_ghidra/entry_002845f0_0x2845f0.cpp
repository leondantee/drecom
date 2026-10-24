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

// Function: entry_002845f0
// Address: 0x2845f0 - 0x2846d8
void entry_002845f0_0x2845f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002845f0_0x2845f0");
#endif

    switch (ctx->pc) {
        case 0x2845fcu: goto label_2845fc;
        case 0x284618u: goto label_284618;
        case 0x28462cu: goto label_28462c;
        case 0x284640u: goto label_284640;
        case 0x28465cu: goto label_28465c;
        case 0x284678u: goto label_284678;
        default: break;
    }

    ctx->pc = 0x2845f0u;

    // 0x2845f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2845f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2845f4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2845F4u;
    SET_GPR_U32(ctx, 31, 0x2845FCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2845FCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2845FCu) { return; }
    ctx->pc = 0x2845FCu;
label_2845fc:
    // 0x2845fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2845fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x284600: 0x8c2295b0  lw          $v0, -0x6A50($at)
    ctx->pc = 0x284600u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B0u));
    // 0x284604: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x284604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284608: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x284608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28460c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x28460cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284610: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x284610u;
    SET_GPR_U32(ctx, 31, 0x284618u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x284618u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x284618u) { return; }
    ctx->pc = 0x284618u;
label_284618:
    // 0x284618: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x284618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x28461c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x28461cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284620: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x284620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x284624: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x284624u;
    SET_GPR_U32(ctx, 31, 0x28462Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x28462Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x28462Cu) { return; }
    ctx->pc = 0x28462Cu;
label_28462c:
    // 0x28462c: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x28462cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x284630: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x284630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284634: 0x262601a0  addiu       $a2, $s1, 0x1A0
    ctx->pc = 0x284634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x284638: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x284638u;
    SET_GPR_U32(ctx, 31, 0x284640u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x284640u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x284640u) { return; }
    ctx->pc = 0x284640u;
label_284640:
    // 0x284640: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x284640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x284644: 0x8c2295b0  lw          $v0, -0x6A50($at)
    ctx->pc = 0x284644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B0u));
    // 0x284648: 0x26240190  addiu       $a0, $s1, 0x190
    ctx->pc = 0x284648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x28464c: 0x26250190  addiu       $a1, $s1, 0x190
    ctx->pc = 0x28464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x284650: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x284650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x284654: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x284654u;
    SET_GPR_U32(ctx, 31, 0x28465Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x284654u, 0x28465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28465Cu;
label_28465c:
    // 0x28465c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28465cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x284660: 0x8c2295b0  lw          $v0, -0x6A50($at)
    ctx->pc = 0x284660u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B0u));
    // 0x284664: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x284664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x284668: 0x262501a0  addiu       $a1, $s1, 0x1A0
    ctx->pc = 0x284668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x28466c: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x28466cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x284670: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x284670u;
    SET_GPR_U32(ctx, 31, 0x284678u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x284670u, 0x284678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284678u;
label_284678:
    // 0x284678: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x284678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28467c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28467cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x284680: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x284680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x284684: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x284684u;
    {
        const bool branch_taken_0x284684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284684) {
            ctx->pc = 0x2846D8u;
            return;
        }
    }
    ctx->pc = 0x28468Cu;
    // 0x28468c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x28468cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x284690: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x284690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x284694: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x284694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x284698: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x284698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28469c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x28469cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2846a0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2846a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2846a4: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x2846a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2846a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2846a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2846ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2846acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2846b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2846b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2846b4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2846b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2846b8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2846B8u;
    {
        const bool branch_taken_0x2846b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2846b8) {
            ctx->pc = 0x2846D8u;
            return;
        }
    }
    ctx->pc = 0x2846C0u;
    // 0x2846c0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2846c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2846c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2846c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2846c8: 0x9023fe17  lbu         $v1, -0x1E9($at)
    ctx->pc = 0x2846c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CFE17u));
    // 0x2846cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2846ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2846d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2846d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2846d4: 0xa023fe17  sb          $v1, -0x1E9($at)
    ctx->pc = 0x2846d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CFE17u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CFE17u, _value); } while (0);
    ctx->pc = 0x2846d8u;
}
