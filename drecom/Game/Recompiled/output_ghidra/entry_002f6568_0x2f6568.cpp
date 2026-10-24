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

// Function: entry_002f6568
// Address: 0x2f6568 - 0x2f6614
void entry_002f6568_0x2f6568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6568_0x2f6568");
#endif

    ctx->pc = 0x2f6568u;

    // 0x2f6568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f656c: 0x94630100  lhu         $v1, 0x100($v1)
    ctx->pc = 0x2f656cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f6570: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x2f6570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f6574: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2f6574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f6578: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x2f6578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x2f657c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2f657cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2f6580: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2f6580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2f6584: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x2f6584u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2f6588: 0x0  nop
    ctx->pc = 0x2f6588u;
    // NOP
    // 0x2f658c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f658cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f6590: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f6590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f6594: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2f6594u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f6598: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x2f6598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f659c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f659cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f65a0: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2f65a0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f65a4: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2f65a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2f65a8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2f65a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2f65ac: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2f65acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f65b0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x2f65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x2f65b4: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2f65b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2f65b8: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2f65b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2f65bc: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x2f65bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2f65c0: 0x0  nop
    ctx->pc = 0x2f65c0u;
    // NOP
    // 0x2f65c4: 0x1810  mfhi        $v1
    ctx->pc = 0x2f65c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f65c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2f65c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f65cc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2f65ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f65d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f65d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f65d4: 0xc38823  subu        $s1, $a2, $v1
    ctx->pc = 0x2f65d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f65d8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f65d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f65dc: 0x8423f1ac  lh          $v1, -0xE54($at)
    ctx->pc = 0x2f65dcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x2f65e0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2f65e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2f65e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2f65e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2f65e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f65ec: 0x94630100  lhu         $v1, 0x100($v1)
    ctx->pc = 0x2f65ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f65f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f65f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f65f4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2f65f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f65f8: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
    ctx->pc = 0x2F65F8u;
    {
        const bool branch_taken_0x2f65f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f65f8) {
            ctx->pc = 0x2F6720u;
            return;
        }
    }
    ctx->pc = 0x2F6600u;
    // 0x2f6600: 0x12200047  beqz        $s1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2F6600u;
    {
        const bool branch_taken_0x2f6600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6600) {
            ctx->pc = 0x2F6720u;
            return;
        }
    }
    ctx->pc = 0x2F6608u;
    // 0x2f6608: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f6608u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f660c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2F660Cu;
    {
        const bool branch_taken_0x2f660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f660c) {
            ctx->pc = 0x2F6710u;
            return;
        }
    }
    ctx->pc = 0x2F6614u;
}
