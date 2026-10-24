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

// Function: Md_vu_type_tbl_set
// Address: 0x254b30 - 0x254e08
void Md_vu_type_tbl_set_0x254b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_vu_type_tbl_set_0x254b30");
#endif

    ctx->pc = 0x254b30u;

    // 0x254b30: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254b34: 0x2464d440  addiu       $a0, $v1, -0x2BC0
    ctx->pc = 0x254b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956096));
    // 0x254b38: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254b3c: 0x2463cf80  addiu       $v1, $v1, -0x3080
    ctx->pc = 0x254b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954880));
    // 0x254b40: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254b44: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254b48: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254b48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254b4c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254b50: 0xac23b7a4  sw          $v1, -0x485C($at)
    ctx->pc = 0x254b50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7A4u, _value); } while (0);
    // 0x254b54: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254b58: 0x2464d990  addiu       $a0, $v1, -0x2670
    ctx->pc = 0x254b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957456));
    // 0x254b5c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254b60: 0x2463d440  addiu       $v1, $v1, -0x2BC0
    ctx->pc = 0x254b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956096));
    // 0x254b64: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254b64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254b68: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254b6c: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254b6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254b70: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254b74: 0xac23b7ac  sw          $v1, -0x4854($at)
    ctx->pc = 0x254b74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7ACu, _value); } while (0);
    // 0x254b78: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254b7c: 0x2464de70  addiu       $a0, $v1, -0x2190
    ctx->pc = 0x254b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958704));
    // 0x254b80: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254b84: 0x2463d990  addiu       $v1, $v1, -0x2670
    ctx->pc = 0x254b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957456));
    // 0x254b88: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254b8c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254b90: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254b90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254b94: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254b98: 0xac23b7b4  sw          $v1, -0x484C($at)
    ctx->pc = 0x254b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7B4u, _value); } while (0);
    // 0x254b9c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254ba0: 0x2464e1b0  addiu       $a0, $v1, -0x1E50
    ctx->pc = 0x254ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959536));
    // 0x254ba4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254ba8: 0x2463de70  addiu       $v1, $v1, -0x2190
    ctx->pc = 0x254ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958704));
    // 0x254bac: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254bb0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254bb4: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254bb4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254bb8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254bbc: 0xac23b7bc  sw          $v1, -0x4844($at)
    ctx->pc = 0x254bbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7BCu, _value); } while (0);
    // 0x254bc0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254bc4: 0x2464e760  addiu       $a0, $v1, -0x18A0
    ctx->pc = 0x254bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960992));
    // 0x254bc8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254bcc: 0x2463e1b0  addiu       $v1, $v1, -0x1E50
    ctx->pc = 0x254bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959536));
    // 0x254bd0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254bd4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254bd8: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254bd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254bdc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254be0: 0xac23b7c4  sw          $v1, -0x483C($at)
    ctx->pc = 0x254be0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7C4u, _value); } while (0);
    // 0x254be4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254be8: 0x2464ed50  addiu       $a0, $v1, -0x12B0
    ctx->pc = 0x254be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962512));
    // 0x254bec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254bf0: 0x2463e760  addiu       $v1, $v1, -0x18A0
    ctx->pc = 0x254bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960992));
    // 0x254bf4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254bf8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254bfc: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254bfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254c00: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254c04: 0xac23b7cc  sw          $v1, -0x4834($at)
    ctx->pc = 0x254c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7CCu, _value); } while (0);
    // 0x254c08: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254c0c: 0x2464f0f0  addiu       $a0, $v1, -0xF10
    ctx->pc = 0x254c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x254c10: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254c14: 0x2463ed50  addiu       $v1, $v1, -0x12B0
    ctx->pc = 0x254c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962512));
    // 0x254c18: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254c18u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254c1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254c20: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254c20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254c24: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254c28: 0xac23b7d4  sw          $v1, -0x482C($at)
    ctx->pc = 0x254c28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7D4u, _value); } while (0);
    // 0x254c2c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254c30: 0x2464f4e0  addiu       $a0, $v1, -0xB20
    ctx->pc = 0x254c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964448));
    // 0x254c34: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254c38: 0x2463f0f0  addiu       $v1, $v1, -0xF10
    ctx->pc = 0x254c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x254c3c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254c40: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254c44: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254c44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254c48: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254c4c: 0xac23b7dc  sw          $v1, -0x4824($at)
    ctx->pc = 0x254c4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7DCu, _value); } while (0);
    // 0x254c50: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254c54: 0x2464fa90  addiu       $a0, $v1, -0x570
    ctx->pc = 0x254c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965904));
    // 0x254c58: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254c5c: 0x2463f4e0  addiu       $v1, $v1, -0xB20
    ctx->pc = 0x254c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964448));
    // 0x254c60: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254c64: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254c68: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254c68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254c6c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254c70: 0xac23b7e4  sw          $v1, -0x481C($at)
    ctx->pc = 0x254c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7E4u, _value); } while (0);
    // 0x254c74: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254c78: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x254c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x254c7c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254c80: 0x2463fa90  addiu       $v1, $v1, -0x570
    ctx->pc = 0x254c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965904));
    // 0x254c84: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254c88: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254c8c: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254c8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254c90: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254c94: 0xac23b7ec  sw          $v1, -0x4814($at)
    ctx->pc = 0x254c94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7ECu, _value); } while (0);
    // 0x254c98: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254c9c: 0x246406d0  addiu       $a0, $v1, 0x6D0
    ctx->pc = 0x254c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1744));
    // 0x254ca0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254ca4: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x254ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x254ca8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254cac: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254cb0: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254cb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254cb4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254cb8: 0xac23b7f4  sw          $v1, -0x480C($at)
    ctx->pc = 0x254cb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7F4u, _value); } while (0);
    // 0x254cbc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254cc0: 0x24640c60  addiu       $a0, $v1, 0xC60
    ctx->pc = 0x254cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3168));
    // 0x254cc4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254cc8: 0x246306d0  addiu       $v1, $v1, 0x6D0
    ctx->pc = 0x254cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1744));
    // 0x254ccc: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254cd0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254cd4: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254cd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254cd8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254cdc: 0xac23b7fc  sw          $v1, -0x4804($at)
    ctx->pc = 0x254cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B7FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B7FCu, _value); } while (0);
    // 0x254ce0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254ce4: 0x24641280  addiu       $a0, $v1, 0x1280
    ctx->pc = 0x254ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4736));
    // 0x254ce8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254cec: 0x24630c60  addiu       $v1, $v1, 0xC60
    ctx->pc = 0x254cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3168));
    // 0x254cf0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254cf4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254cf8: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254cf8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254cfc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254d00: 0xac23b804  sw          $v1, -0x47FC($at)
    ctx->pc = 0x254d00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B804u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B804u, _value); } while (0);
    // 0x254d04: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254d08: 0x24641970  addiu       $a0, $v1, 0x1970
    ctx->pc = 0x254d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6512));
    // 0x254d0c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254d10: 0x24631280  addiu       $v1, $v1, 0x1280
    ctx->pc = 0x254d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4736));
    // 0x254d14: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254d18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254d1c: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254d1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254d20: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254d24: 0xac23b80c  sw          $v1, -0x47F4($at)
    ctx->pc = 0x254d24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B80Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B80Cu, _value); } while (0);
    // 0x254d28: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254d2c: 0x24641f70  addiu       $a0, $v1, 0x1F70
    ctx->pc = 0x254d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8048));
    // 0x254d30: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254d34: 0x24631970  addiu       $v1, $v1, 0x1970
    ctx->pc = 0x254d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6512));
    // 0x254d38: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254d3c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254d40: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254d40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254d44: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254d48: 0xac23b814  sw          $v1, -0x47EC($at)
    ctx->pc = 0x254d48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B814u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B814u, _value); } while (0);
    // 0x254d4c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254d50: 0x24642520  addiu       $a0, $v1, 0x2520
    ctx->pc = 0x254d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 9504));
    // 0x254d54: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254d58: 0x24631f70  addiu       $v1, $v1, 0x1F70
    ctx->pc = 0x254d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8048));
    // 0x254d5c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254d60: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254d64: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254d64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254d68: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254d6c: 0xac23b81c  sw          $v1, -0x47E4($at)
    ctx->pc = 0x254d6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B81Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B81Cu, _value); } while (0);
    // 0x254d70: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254d74: 0x24642ab0  addiu       $a0, $v1, 0x2AB0
    ctx->pc = 0x254d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10928));
    // 0x254d78: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254d7c: 0x24632520  addiu       $v1, $v1, 0x2520
    ctx->pc = 0x254d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9504));
    // 0x254d80: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254d84: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254d88: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254d88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254d8c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254d90: 0xac23b824  sw          $v1, -0x47DC($at)
    ctx->pc = 0x254d90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B824u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B824u, _value); } while (0);
    // 0x254d94: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254d98: 0x246430b0  addiu       $a0, $v1, 0x30B0
    ctx->pc = 0x254d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12464));
    // 0x254d9c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254da0: 0x24632ab0  addiu       $v1, $v1, 0x2AB0
    ctx->pc = 0x254da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10928));
    // 0x254da4: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254da8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254dac: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254dacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254db0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254db4: 0xac23b82c  sw          $v1, -0x47D4($at)
    ctx->pc = 0x254db4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B82Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B82Cu, _value); } while (0);
    // 0x254db8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254dbc: 0x246437a0  addiu       $a0, $v1, 0x37A0
    ctx->pc = 0x254dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 14240));
    // 0x254dc0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254dc4: 0x246330b0  addiu       $v1, $v1, 0x30B0
    ctx->pc = 0x254dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12464));
    // 0x254dc8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254dcc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254dd0: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254dd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254dd4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254dd8: 0xac23b834  sw          $v1, -0x47CC($at)
    ctx->pc = 0x254dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B834u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B834u, _value); } while (0);
    // 0x254ddc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254de0: 0x246437b0  addiu       $a0, $v1, 0x37B0
    ctx->pc = 0x254de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 14256));
    // 0x254de4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x254de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x254de8: 0x246337a0  addiu       $v1, $v1, 0x37A0
    ctx->pc = 0x254de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14240));
    // 0x254dec: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x254decu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x254df0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x254df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x254df4: 0x41903  sra         $v1, $a0, 4
    ctx->pc = 0x254df4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
    // 0x254df8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x254dfc: 0xac23b83c  sw          $v1, -0x47C4($at)
    ctx->pc = 0x254dfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x38B83Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38B83Cu, _value); } while (0);
    // 0x254e00: 0x3e00008  jr          $ra
    ctx->pc = 0x254E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254E08u;
}
